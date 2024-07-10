#include <stdio.h>
#include <math.h>
#include "funsion.math.h"
#define MAX 10001



void demUoc (int n)
{
	int p = 0, s = 0;
	int q = 0, k = 0;
	for(int i=1; i<=n; i++)
	{
		if(n % i == 0)
		{
			p += i;
			s++;
			if(isPrime(i,6))
			{
				q += i;
				k++;
			}
		}		
	}
	printf("%d\n", n + p + s - q - k);
}

int main()
{
	int n;
	scanf("%d", &n);
	
	demUoc (n);

	return 0;
}