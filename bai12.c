#include<stdio.h>
#include<stdlib.h>

void Gop_mang(int a[], int n, int b[], int m, int c[]) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    while (i < n) {
        c[k++] = a[i++];
    }
    while (j < m) {
        c[k++] = b[j++];
    }
}

void Sap_Xep_Tang_Dan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void Xuat_mang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int n, m;
    printf("Nhap so phan tu cua mang 1: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap mang 1: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Nhap so phan tu cua mang 2: ");
    scanf("%d", &m);
    int b[m];
    printf("Nhap mang 2: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    int c[n + m];
    Gop_mang(a, n, b, m, c);
    Sap_Xep_Tang_Dan(c, n + m);
    Xuat_mang(c, n + m);
    return 0;
}