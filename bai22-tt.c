#include <stdio.h>
#include <math.h>
#include "funsion.math.h"
#define true 1
#define false 0
#define MAX 100



int getF(int n)
{
	if(isPrime(n,5))
		return n;
	else
		return 0;
}

int main()
{
	int l, r;
	printf("Nhap khoang [L, R]: ");
	scanf("%d%d", &l ,&r);
	long long sum = 0;
	for(int i=l; i<r; i++)
	{
		for(int j=i+1; j<=r; j++)
		{
			sum += getF(i)*getF(j);
		}
	}
	printf("%lld", sum);

	return 0;
}