#include <stdio.h>

int main() {
    int n, i, j;
    printf("Nhap n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap phan tu cua day: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("day vua nhap ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int freq[n];
    for(i = 0; i < n; i++) {
        freq[i] = -1; 
    }

    for(i = 0; i < n; i++) {
        int count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0; 
            }
        }
        if(freq[i] != 0) {
            freq[i] = count;
        }
    }

    printf("Tan suat xuat hien:\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("%d - %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}