#include <stdio.h>

int main(){
    int n ;
    printf("nhap n : ");
    scanf("%d",&n);
    int a[n][n];
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    int dem = 1;
    while(h1 <= h2 && c1 <= c2){
        //Xây dựng cạnh trên : hàng h1 từ cột c1 => cột c2
        for(int i = c1; i <= c2; i++){
            a[h1][i] = dem; ++dem;
        }
        //Tăng h1 để xây dựng cạnh bên phải, cột c2 từ hàng h1 tới hàng h2
        ++h1;
        for(int i = h1; i <= h2; i++){
            a[i][c2] = dem; ++dem;
        }
        //giảm c2 để xây dựng cạnh dưới, hàng h2 từ c2 => cột c1
        --c2;
        for(int i = c2; i >= c1; i--){
            a[h2][i] = dem; ++dem;
        }
        //giảm h2 để xây dựng cạnh bên phải, cột c1 từ hàng h2 tới hàng h1
        --h2;
        for(int i = h2; i >= h1; i--){
            a[i][c1] = dem; ++dem;
        }
        //tăng c1
        ++c1;
    }
    printf("Ma tran xoay cap %d : \n", n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}