#include<stdio.h>
#include<math.h>

int giaithua(int n) {
    int ketqua = 1;
    for (int i = 1; i <= n; i++) {
        ketqua *= i;
    }
    return ketqua;
}

double Tong(int n) {
    double Tong = 0;
    for (int i = 1; i <= n; i++) {
        Tong += (1.0 /giaithua(i));
    }
    return Tong;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tong = %.2lf", Tong(n));
    return 0;
}