#include <stdio.h>

int main() {
    int n = 6; 
    for (int i = 0; i < n -1 ; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("*");
        }
        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 2 * n ; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}