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
void insert(int x){
    int i;
    for (i=n-1; i>=0; i--){
        if (a[i] < x){
            break;
        }
        a[i+1] = a[i];
    }
    a[i+1] = x;
    n = n+1;
}
void sap_xep(){
    for (int i=1; i<n; i++){
        int key = a[i];
        int j = i-1;
        while (j>=0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}
void output(){
    for (int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main(){
    printf("Nhap day (<100 phan tu) moi so cach nhau 1 dau cach: \n");
    input();

    printf("Mang ban dau: \n");
    output();

    sap_xep();
    printf("Mang sau khi sap xep : \n");
    output();

    printf("Nhap them 1 so moi: ");
    int x;
    scanf("%d", &x);


    printf("Mang sau khi chen x vao: \n");
    insert(x);
    output();

    return 0;
}

