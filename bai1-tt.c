	#include <stdio.h>
	#include <math.h>
	#include "funsion.math.h"
	#define MAX 100

	

	int main()
	{
		int n;
		printf("Nhap n = ");
		scanf("%d", &n);
		
		int flag = 0;
		for(int i=1; i<=n; i++)
		{
			if(isQPrime(i,6))
			{
				flag = 1;
				printf("%d ", i);
			}
		}
		if(flag == 0)
			printf("No");

		return 0;
	}