#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu cua day: ");
    scanf("%d", &n);
    int a[100];
    printf("Nhap cac phan tu cua day:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    double Tong_Duong = 0;
    double Tong_Am = 0;
    int Demsoduong = 0;
    int Demsoam = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            Tong_Duong += a[i];
            Demsoduong++;
        } else if (a[i] < 0) {
            Tong_Am += a[i];
            Demsoam++;
        }
    }
    
    double TBC_DUONG = (Demsoduong > 0) ? (Tong_Duong / Demsoduong) : 0;
    double TBC_AM = (Demsoam > 0) ? (Tong_Am / Demsoam) : 0;
    
    printf("Trung binh cong cac so duong: %.2lf\n", TBC_DUONG);
    printf("Trung binh cong cac so am: %.2lf\n", TBC_AM);
    
    return 0;
}