#include <stdio.h>
#include <math.h>
#include "funsion.math.h"
#define true 1
#define false 0
#define MAX 10001

// SD de quy 


void show (int *a, int n)
{
	for(int i=n-1; i>=0; i--)
		printf("%5d", a[i]);
	printf("\n");
}

void findPrime (int n, int m, int prime[], int len, int a[], int res)
{
	if (n == 0 && m == 0)  
        show(a, res);
    else if (n == 0 || m == 0)
    	return;	
    else
    {
		for(int i=0; i<len ; i++)
		{	
			if(n >= prime[i])
			{
				a[res] = prime[i];
				findPrime(n - prime[i], m - 1, prime, i, a, res + 1);
			}
		}
	}
}

int main()
{
	int N, M;
	printf("Nhap N = ");
	scanf("%d", &N);
	printf("Nhap so luong so nguyen to M = ");
	scanf("%d", &M);
	
	int prime[MAX], len=0;
	for(int i=2; i<=N; i++)
	{
		if(isPrime(i,6))
			prime[len++] = i;
	}
	
	int a[MAX];
	findPrime(N, M, prime, len, a, 0);

	return 0;
}