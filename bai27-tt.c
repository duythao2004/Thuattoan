#include <stdio.h>
#include <math.h>
#include "funsion.math.h"



int gcd(int a, int b) //pp Euclid
{
	while(b != 0) 
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	int a, b;
	do
	{
		printf("Nhap 2 so: ");
		scanf("%d%d", &a, &b);
	}
	while(a<=0 || b>=1000);
	for(int i=a; i<=b; i++)
	{
		for(int j=i+1; j<=b; j++)
		{
			if(isPrime(gcd(i,j),5))
			{
				printf("GCD (%d, %d) = %d\n", i, j, gcd(i,j));
			}				
		}
	}


	return 0;
}