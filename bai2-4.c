#include <stdio.h>

int n = 0;
int a[100];
void input(){
    char c;
    int x;
    do {
        scanf("%d%c", &x, &c);
        a[n++] = x;
    }while(c != '\n');
}
void xoa_so_chia_het_cho_5(){
    int i = 0;
    while (i<n){
        if (a[i]%5 == 0){
            for (int j=i; j<n-1; j++){
                a[j] = a[j+1];
            }
            n--;
        }
        else{
            i++;
        }
    }
}
void output(){
    for (int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main(){
    printf("Nhap day so: \n");
    input();

    printf("Mang ban dau: \n");
    output();

    printf("Mang sau khi xoa cac phan tu chia het cho 5 la: \n");
    xoa_so_chia_het_cho_5();
    output();

    return 0;
}


