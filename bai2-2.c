#include<stdio.h>
#include<math.h>

int main(){
	int n,x,k; 
	scanf("%d%d%d",&n,&x,&k);
	int a[100];
	for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    n++;
    if(k > n) {
        a[n] = x;
    }
    else {
        for(int i = n; i > k; i--) {
            a[i] = a[i-1];
        }
        a[k] = x;
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;

     
}

