#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void nhap_he_so(double a[], int n){
    for (int i=n-1; i>=0; i--){
        printf("he so bac %d = ", i);
        scanf("%lf", &a[i]);
    }
}
double gia_tri_da_thuc(double a[], int n, double x){
    double giatri = 0;
    for (int i=0; i<n; i++){
        giatri = giatri + a[i]*pow(x,i);
    }
    printf("\n");
    return giatri;
}
void tong_da_thuc(double c[], int k, double a[], int n, double b[], int m){
    int len = m>n?n:m;
    int i;
    for (i=0; i<len; i++){
        c[i] = a[i] + b[i];
    }
    while (i<n){
        c[i] = a[i];
        i++;
    }
    while (i<m){
        c[i] = b[i];
        i++;
    }
}
void in_he_so(double a[], int n){
    for (int i=n-1; i>=0; i--){
        if (a[i] == 0){
            continue;
        }
        printf("%.1lf", a[i]);
        if (i != 0){
            printf("x^%d + ",i);
        }
    }
    printf("\n");
}
int main(){
    int n;
    printf("Nhap bac cua da thuc P: ");
    scanf("%d", &n);

    n+=1;

    double a[n];

    nhap_he_so(a, n);


    int m;
    printf("Nhap bac cua da thuc Q: ");
    scanf("%d", &m);
    m += 1;

    double b[m];

    nhap_he_so(b, m);

    double x;
    printf("Nhap gia tri x = ");

    scanf("%lf", &x);

    printf("P(x) = %.2lf\n", gia_tri_da_thuc(a, n, x));
    printf("Q(x) = %.2lf\n", gia_tri_da_thuc(b, m, x));

    int k = m>n?m:n;
    double c[k];

    tong_da_thuc(c, k, a, n, b, m);
    printf("\n");
    printf("He so cua da thuc P:\n");
    in_he_so(a, n);
    printf("He so cua da thuc Q: \n");
    in_he_so(b, m);
    printf("He so cua da thuc T = P+Q: \n");
    in_he_so(c, k);



}