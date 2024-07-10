#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap mang : \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int min_even = INT_MAX; 

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0 && a[i] < min_even) {
            min_even = a[i];
        }
    }
    if (min_even == INT_MAX) {
        printf("K co so chan.\n");
    } else {
        printf("So chan nho nhat la : %d\n", min_even);
    }

    return 0;
}

