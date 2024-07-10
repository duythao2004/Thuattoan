#include <stdio.h>
#include <math.h>
#include "funsion.math.h"



int isSuperPrime(int n)
{
	int cnt = 0;
	for(int i=1; i<n; i++)
	{
		if(isPrime(i,6))
			cnt++;
	}
	if(isPrime(cnt,6))
		return 1;
	return 0;
}

int main()
{
	int a,b;
	printf("Nhap khoang [a, b]: ");
	scanf("%d%d", &a, &b);
	int cnt = 0;
	for(int i=a; i<=b; i++)
	{
		if(isSuperPrime(i))
		{
			printf("%d  ", i);
			cnt++;
		}			
	}
	printf("\n%d", cnt);

	return 0;
}