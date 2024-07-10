#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int N = 1000;
    int *ptr1 = &N; // ptr1 trỏ tới N
    int *ptr2 = &N; // ptr2 trỏ tới N
    int *ptr3 = ptr1; // Gán giá trị của ptr1 cho ptr3, tương tự gán &N cho ptr3
    printf("Gia tri cua 3 con tro : %d %d %d\n", ptr1, ptr2, ptr3);
    *ptr1 = 100; // N = 100
    printf("Gia tri cua N : %d\n", N);
    *ptr2 = 200; // N = 200
    printf("Gia tri cua N : %d\n", N);
    *ptr3 = 300; // N = 300
    printf("%d %d %d %d\n", *ptr1, *ptr2, *ptr3, N);
    return 0;
}