
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "funsion.math.h"
#define MAX 10001


void randomNumber(long long *p)
{
	srand(time(0));
	*p = rand() % (999 - 1 + 1) + 1;
	printf("Random: p = %lld\n", *p);
}

int power(int a, int k, int m)
{
	int b = 1;
	int  A = a;
	if(k % 2 == 1)
		b = a;
	k /= 2;
	while(k > 0)
	{
		A = (A * A) % m;
		if(k % 2 == 1)
			b = (b * A) % m;
		k /= 2;
	}
	return b;
}

int main()
{
	long long n, p;
	printf("Nhap n = ");
	scanf("%lld", &n);
	randomNumber(&p);
	
	for(int i=1; i<n; i++)
	{
		if(isPrime(power(i, p, n),6))
			printf("%lld ^ %lld mod %lld = %lld is prime\n", i, p, n, power(i, p, n));
	}

	return 0;
}
