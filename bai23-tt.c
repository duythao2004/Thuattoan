#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funsion.math.h"
#define MAX 100

long long max (long long a, long long b)
{
	return a > b ? a : b;
}

long long sum (long long a, long long b)
{
	int *prime = (int*)malloc(sizeof(int)*(b+1));
	for(long long i=2; i<=b; i++)
		prime[i] = 1;
	for(long long i=max(a, 2); i<=sqrt(b); i++)
	{
		for(long long j=i*i; j<=b; j+=i)
			prime[j] = 0;
	}
	
	long long s = 0;
	for(long long i=a; i<=b; i++)
	{
		if(prime[i])
			s += i;
	}
	return s;
}



int main()
{
	long long A, B;
	printf("Nhap khoang [A, B]: ");
	scanf("%lld%lld", &A, &B);
	if(isPrime(sum(A, B),5))
		printf("YES");
	else
		printf("NO");

	return 0;
}