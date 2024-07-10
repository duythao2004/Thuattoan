#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double X[100], Y[100];

    printf("Nhap so phan tu cua day: ");
    scanf("%d", &n);

    if (n > 100) {
        printf("So luong phan tu < 100.\n");
        return 1;
    }

    printf("Cac gia tri cua day X:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &X[i]);
    }

    printf("Cac gia tri cua day Y:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &Y[i]);
    }

    double a = 0;
    for (int i = 0; i < n; i++) {
        a += sin(X[i]) * cos(Y[i]);
    }
    printf("a, tong sin(X_i) * cos(Y_i) = %lf\n", a);

    double b = 0;
    for (int i = 0; i < n; i++) {
        b += pow(X[i]-Y[i],2);
    }
    printf("b, can bac hai cua tong (x_i - y_i)^2 = %lf\n", sqrt(b));

    double c = 0;
    for (int i = 0; i < n-1; i++) {
        c += pow(X[2], i + 2) * Y[i + 1];
    }
    printf("c, tong = %lf\n", c);

    return 0;
}

