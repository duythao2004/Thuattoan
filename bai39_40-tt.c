#include <stdio.h>
#include <math.h>
#include "funsion.math.h"
#define MAX 10001

void enterArray (long long a[], int n)
{
	for(long long i=0; i<n; i++)
	{
		printf("A[%d] = ", i);
		scanf("%lld", &a[i]);
	}		
}

long long gcd (long long a, long long b)
{
	while(b != 0)
	{
		long long r = a%b;
		a = b;
		b = r;
	}
	return a;
}



void solve (long long a[], int n)
{
	for(long long i=0; i<n-1; i++) //duyet moi cap trong mang 
	{
		for(long long j=i+1; j<n; j++)
		{
			if(isPrime(gcd(a[i], a[j]),6) == 1)
				printf("GCD (%lld, %lld) = %lld is prime\n", a[i], a[j], gcd(a[i], a[j]));
		}
	}
}

int main()
{
	long long n, a[MAX];
	printf("Nhap so phan tu mang: ");
	scanf("%lld", &n);
	printf("Nhap cac phan tu\n");
	enterArray(a, n);
	solve(a, n);

	return 0;
}