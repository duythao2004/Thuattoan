#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "funsion.math.h"
#define true 1
#define false 0
#define MAX 1000


int reverse(int n) //ham dao nguoc so nguyen n 
{
	int rev = 0, r;
	while(n != 0)
	{
		r = n % 10;
		rev = rev * 10 + r;
		n /= 10;
	}
	return rev;
}



void isCubeNumber(int n)
{
	if(isPrime(n,6))
	{
		for(int i=5; i<=9; i++)		//STN ^3 len co 3cs chi trong khoang nay
		{
			if(i*i*i == reverse(n))
				printf("%d\n", n);
		}
	}
}

int main()
{
	for(int i=100; i<=999; i++)
	{
		isCubeNumber(i);
	}

	return 0;
}