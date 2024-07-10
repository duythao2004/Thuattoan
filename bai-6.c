#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double func(double x, double n){
    if (n<0){
        return 1/func(x, -n);
    }
    if (n == 0){
        return 1;
    }
    if (n == 1){
        return x;
    }
    else{
        return func(x, n-1)*x;
    }
}
int giai_thua_kep(int n){
    if (n==0 || n==1){
        return 1;
    }
    else{
        return giai_thua_kep(n-2)*n;
    }
}
int main() {
    printf("f(x,n) = x^n\n");
    printf("x = ");
    double x;
    scanf("%lf", &x);
    printf("n = ");
    double n;
    scanf("%lf", &n);
    printf("f(%.0lf,%.0lf) = %.2lf",x ,n , func(x,n));
    int m;
    printf("\ns(n) = (2n)!!\nn = ");
    scanf("%d", &m);
    printf("s(%d) = (%d)!! = %d", m, 2*m, giai_thua_kep(2*m));
    return 0;
}