#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int n = 0;
void input(double a[]){
    double x;
    char c;
    do{
        scanf("%lf", &x);
        a[n] = x;
        n++;
        scanf("%c", &c);
    }while ( c!='\n');
}
void output(double a[]){
    for (int i=0; i<n; i++){
        printf("%.2lf ", a[i]);
    }
    printf("\n");
}
void func(double a[]){
    for (int i = 1; i<n-1; i++){
        if (a[i] == (a[i-1]+a[i+1])/2){
            printf("a[i-1] = %.2lf  a[i] = %.2lf  a[i+1] = %.2lf\n", a[i-1], a[i], a[i+1]);
        }
    }
    printf("\n");
}
int main(){
    printf("Nhap day, moi so cach nhau 1 dau cach: \n");
    double a[200];
    input(a);
    output(a);
    func(a);

    return 0;
}

