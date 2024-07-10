#include<stdio.h>
#include<math.h>

void nhap(int a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("a[%d] = : ", i+1);
        scanf("%d", &a[i]);
    }
}

int Tong(int a[], int n) {
    int tong = 0;
    for(int i = 0; i < n; i++) {
        tong += a[i];
    }
    return tong;
}

long long Tich(int a[], int n) {
    long long tich = 1;
    for(int i = 0; i < n; i++) {
        tich *= a[i];
    }
    return tich;
}

int cacsochiahetcho3(int a[], int n) {
    int i;
    for(int i = 0; i < n; i++) {
        if(a[i] % 3 == 0 && a[i] > 10 ) 
        {
            printf("%d , ", a[i]);  
        }
    }
}

int Dem(int a[], int n) {
    int dem = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > 100 && a[i] < 1000) {
            dem++;
        }
    }
    return dem;
}

int main() {
    int n , i;
    printf("nhap n: ");
    scanf("%d", &n);
    int a[n];
    nhap(a, n);
    printf("tong cac phan tu trong mang la: %d \n", Tong(a, n));
    printf("tich cac phan tu trong mang la: %lld \n", Tich(a, n));
    printf("Cac so chia het cho 3 va lon hon 10 la : ");
    cacsochiahetcho3(a, n);
    printf("\n");
    printf("co %d so trong mang lon hon 100 va nho hon 1000\n", Dem(a, n));
}

