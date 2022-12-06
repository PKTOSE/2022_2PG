//
// Created by Arkitio on 2022-12-06.
//
#include "stdio.h"
#include "stdlib.h"

int main() {
    FILE *fp1 = NULL, *fp2 = NULL;
    fp1 = fopen("std_info.txt", "r");
    fp2 = fopen("std_info_avg.txt", "w");
    if (fp1 == NULL) {
        fprintf(stderr, "파일1 열기 실패\n");
        exit(1);
    }
    if (fp2 == NULL) {
        fprintf(stderr, "파일2 열기 실패\n");
        exit(1);
    }

    int cnt = 0, number;
    double total = 0;
    char name[20];
    float score;

    while (!feof(fp1)) {
        fscanf(fp1, "%d %s %f", &number, name, &score);
        printf("%03d %s %.2f\n", number, name, score);
        fprintf(fp2, "%03d %s %.2f\n", number, name, score);
        total += score;
        cnt++;
    }

    printf("\n반평균: %.3f", total/cnt);
    fprintf(fp2,"반평균: %.3f", total/cnt);

    fclose(fp1);
    fclose(fp2);
    return 0;
}