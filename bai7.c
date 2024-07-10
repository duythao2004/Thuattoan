#include <stdio.h>
#include<math.h>

int giaithua(float n) {
    double Ketqua = 1;
    for (int i = 1; i <= n; i++) {
        Ketqua *= i;
    }
    return Ketqua;
}


double TinhEx(double x, float n) {
    double Tong = 1.0;

    for (int i = 1; i < n; i++) {
        Tong += (x / giaithua(i));
        x *= x;
    }

    return Tong;
}

int main() {
    double x;
    float n;
    printf("Nhap gia tri cua x: ");
    scanf("%lf", &x);
    printf("Nhap n: ");
    scanf("%f", &n);
    double Ketqua = TinhEx(x, n);
    printf("Gia tri cua e^%.0lf la: %.5lf\n", x, Ketqua);

    return 0;
}