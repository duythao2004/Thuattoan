#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "funsion.math.h"
#define MAX 100



int reverse (int n)
{
	int rev = 0;
	while (n != 0)
	{
		int r = n % 10;	
		rev = rev * 10 + r;
		n /= 10;
	}
	return rev;
}

int main()
{
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	
	int cnt = 0;
	for(int i=0; i<n; i++)
	{
		if(isPrime(i,6) && isPrime(reverse(i),6))
		{
			printf("%d ", i);
			cnt++;
		}		
	}
	printf("\n%d\n", cnt);
	
	return 0;
}