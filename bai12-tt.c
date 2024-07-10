#include <stdio.h>
#include <math.h>
#include "funsion.math.h"
#define MAX 1001

// su dung mang luu cac so nguyen to va duyet cac cap 4 so nguyen to lien tiep trong mang de kiem tra dk


int main()
{
	int n;
	scanf("%d", &n);
	int a[MAX];
	int index = 0;
	for(int i=2; i<=n; i++)
	{
		if(isPrime(i,6))
			a[index++] = i;
	}

	for(int i=0; i<index-3; i++)
	{
		int s = a[i] + a[i+1] + a[i+2] + a[i+3];
		if(s <= n && isPrime(s,6))
			printf("%d %d %d %d\n", a[i], a[i+1], a[i+2], a[i+3]);
	}

	return 0;
}