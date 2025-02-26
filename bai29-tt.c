#include <stdio.h>
#include <math.h>
#include "funsion.math.h"
#define true 1
#define false 0
#define MAX 1000
 
//	b^(n-1) mod n = 1
// gcd(b,n) = 1; b la hop so

int gcd(int a, int b)
{
	while(b!=0)
	{
		int r = a%b;		
		a = b;
		b = r;
	}
	return a;
}



int power(int a, int k, int m)
{
	int b = 1;
	long long A = a;
	if(k%2 == 1)
		b = a;
	k /= 2;
	while(k > 0)
	{
		A = (A*A) % m;
		if(k%2 == 1)
			b = (b*A) % m;
		k /= 2;
	}
	return b;
}

int isCarmichaelNumber(int n)
{	
	if(isPrime(n,6))
		return 0;
	for(int b=2; b<=n-1; b++)
	{
		if(gcd(b,n) == 1)
		{
			if(power(b, n-1, n) != 1)
				return 0;	
		}
	}
	return 1;
}

int main()
{
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	
	int cnt = 0;
	for(int i=2; i<n; i++)
	{		
		if(isCarmichaelNumber(i))
			cnt++;		
	}
	printf("%d ", cnt);

	return 0;
}