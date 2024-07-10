#include <stdio.h>

int tim_phan_tu_am_cuoi_cung_trong_mang(int a[], int n) {
    int i;
    for (i = n - 1; i >= 0; i--) {
        if (a[i] < 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Nhap n : ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap mang :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int p = tim_phan_tu_am_cuoi_cung_trong_mang(a, n);
    if (p == -1) {
        printf("Khong co phan tu am trong mang.\n");
    } else {
        printf("Phan tu am cuoi cung la : %d\n", a[p]);
    }
    return 0;
}