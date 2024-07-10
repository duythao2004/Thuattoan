#include <stdio.h>
#include <math.h>
#include "funsion.math.h"
#define true 1
#define false 0
#define MAX 10001

//tao mang va kiem tra tung cap so 


int main()
{
	int n;
	scanf("%d", &n);
	int index = 0, a[MAX];
	for(int i=2; i<=n; i++)
	{
		if(isPrime(i,6))
			a[index++] = i;
	}
	
	for(int i=0; i<index; i++)
	{
		for(int j=i+1; j<=index-1; j++)	
		{
			int tong = a[i] + a[j];
			int hieu = a[j] - a[i];
			if(isPrime(tong,6) == 1 && isPrime(hieu,6) == 1)
			{
				printf("%d %d\n", a[i], a[j]);
			}					
		}											
	}

	return 0;
}