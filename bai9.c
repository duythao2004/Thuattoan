#include<stdio.h>
#include<math.h>

int binhphuong(int n) {
    int binhphuong = 1;
    for (int i = 1; i <= n; i++) {
        binhphuong = i*i ;
    }
    return binhphuong;
}

double Tong(int n) {
    double Tong = 0;
    for (int i = 1; i <= n; i++) {
        Tong += (1.0 /binhphuong(i));
    }
    return Tong;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tong = %.4f", Tong(n));
    return 0;
}