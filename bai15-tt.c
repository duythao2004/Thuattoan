#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "funsion.math.h"
#define true 1
#define false 0
#define MAX 1000

// UD bai toan SNT sinh doi

int main()
{
	int n;
	scanf("%d", &n);
	
	for(int i=2; i<=n-2; i++)
    {
        if(isPrime(i,5) && isPrime((i + 2),6)) 
			printf("%d %d\n", i, i + 2);
    }

	return 0;
}