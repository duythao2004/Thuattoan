#include <stdio.h>
#include <math.h>
#include "funsion.math.h"
#define MAX 100


void demUoc (int n)
{
	int cnt1 = 0, cnt2 = 0;
	for(int i=1; i<=n; i++)
	{
		if(n % i == 0)
		{
			cnt1++;
			if(isPrime(i,6))

				cnt2++;
		}
	}
	printf("Co %d uoc\nCo %d uoc nguyen to\n", cnt1, cnt2);
}

int main()
{
	int n;
	scanf("%d", &n);
	
	demUoc(n);

	return 0;
}