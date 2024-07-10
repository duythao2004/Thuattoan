#include<stdio.h>

int namnhuan(int nam) {
    if (nam % 4 == 0) {
        if (nam % 100 == 0) {
            if (nam % 400 == 0) {
                return 1; 
            } else {
                return 0; 
            }
        } else {
            return 1; 
        }
    } else {
        return 0; 
    }
}

int Songaytrongthang(int thang, int nam
) {
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (namnhuan(nam)) {
                return 29;
            } else {
                return 28;
            }
        default:
            return -1; 
    }
}

int main() {
    int thang,nam;

    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);
    int ngay = Songaytrongthang(thang , nam);

    if (ngay == -1) {
        printf("Thang khong hop le.\n");
    } else {
        printf("Thang %d nam %d co %d ngay.\n", thang , nam , ngay);
    }

    return 0;
}