#include <stdio.h>
#include <stdlib.h>

int rA, cA, rB, cB;

void nhap_co(int *r, int *c) {
    printf("Nhap so hang ma tran: ");
    scanf("%d", r);
    printf("Nhap so cot ma tran: ");
    scanf("%d", c);
}

void nhap_ma_tran(double a[][20], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("matran[%d][%d] = ", i, j);
            scanf("%lf", &a[i][j]);
        }
    }
}

void tich_ma_tran(double c[][20], double a[][20], double b[][20]) {
    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cB; j++) {
            c[i][j] = 0;
            for (int k = 0; k < cA; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void in_ma_tran(double a[][20], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("a[%d][%d] = %5.1lf   ", i, j, a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    printf("Ma tran A\n");
    nhap_co(&rA, &cA);
    double a[rA][20];
    nhap_ma_tran(a, rA, cA);

    printf("Ma tran B\n");
    do {
        nhap_co(&rB, &cB);
        if (cA != rB) {
            printf("So cot ma tran A phai bang so hang ma tran B.\n");
        } else {
            break;
        }
    } while (1);

    double b[rB][20];
    nhap_ma_tran(b, rB, cB);

    double c[rA][20];
    tich_ma_tran(c, a, b);

    printf("Ma tran A:\n");
    in_ma_tran(a, rA, cA);
    printf("Ma tran B:\n");
    in_ma_tran(b, rB, cB);
    printf("Ma tran C = A x B:\n");
    in_ma_tran(c, rA, cB);

    return 0;
}