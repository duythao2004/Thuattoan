#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 25
int n;
int total = 0;
int max = 0;

int congviec[SIZE][SIZE];

int cot[SIZE];

int ketqua[SIZE];
int winner[SIZE];
void nhap_ma_tran(){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("a[%d][%d] = ",i ,j);
            scanf("%d", &congviec[i][j]);
        }
    }
}
void in_ma_tran(){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%5d ", congviec[i][j]);
        }
        printf("\n");
    }
}
void save(){
    for (int i=0; i<n; i++){
        winner[i] = ketqua[i];
    }
}
void in_day(){
    for (int i=0; i<n; i++){
        printf("%d ", ketqua[i]);
    }
    printf("\n");
}
int sum(){
    int tong =0;
    for (int i=0; i<n; i++){
        tong = tong + congviec[i][ketqua[i]];
    }
    return tong;
}

void Try(int j){
    int i;
    for (i = 0; i < n; i++)
    {
        if (cot[i]){
            ketqua[j] = i;
            cot[i] = 0;

            if (j<n-1){
                Try(j+1);
            }
            else{
                total = sum();
                in_day();
                printf("total = %d\n", total);
                if (total > max){
                    save();
                    max = total;
                }
            }
            cot[i] = 1;
        }
    }
}

int main() {
    printf("Nhap n = ");
    scanf("%d", &n);
    nhap_ma_tran();
    in_ma_tran();
    for (int i=0; i<n; i++){
        cot[i] = 1;
    }
    Try(0);

    for (int i=0; i<n; i++){
        printf("nguoi %d chon viec %d\n",i , winner[i]);
    }
}