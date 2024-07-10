#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n = 0;
void nhap_ham(double a[]){
    double x;
    char c;
    do{
        scanf("%lf", &x);
        a[n] = x;
        n++;
        scanf("%c", &c);
    }while ( c!='\n');
}
void in_mang(double a[]){
    for (int i=0; i<n; i++){
        printf("%.2lf ", a[i]);
    }
    printf("\n");
}
double tim_min(double a[]){
    double min = a[0];
    for (int i=0; i<n; i++){
        if (a[i] < min){
            min = a[i];
        }
    }
    return min;
}
void in_min(double a[], double min){
    for (int i=0; i<n; i++){
        if (a[i] == min){
            printf("%d ", i+1);
        }
    }
}
int main(){
    printf("Nhap day (<100 phan tu) moi so cach nhau 1 dau cach: \n");
    double a[100];
    nhap_ham(a);
    in_mang(a);
    double min = tim_min(a);

    printf("So be nhat la: %.2lf va cac vi tri la: ", min);
    in_min(a, min);
    return 0;
}

