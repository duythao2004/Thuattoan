#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "funsion.math.h"
#define MAX 100



int solve(int a, int b, int c)
{
	int x = 1;
	while(1)
	{
		long long y = a*x*x + b*x + c;
		if(isPrime(y,5)) // kiem tra kq co la SNT k
			return x;	
		else
			x++;
	}
}

int main()
{
	int A, B, C;
	printf("Nhap A = ");
	scanf("%d", &A);
	printf("Nhap B = ");
	scanf("%d", &B);
	printf("Nhap C = ");
	scanf("%d", &C);
	printf("Xmin = %d\n", solve(A, B, C));

	return 0;
}