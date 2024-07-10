#include <stdio.h>
#include <math.h>
#include <time.h>
#include "funsion.math.h"
#define true 1
#define false 0
#define MAX 10001

void randomArray (int a[], int n)
{
	srand(time(0));
	for(int i=0; i<n; i++)
		a[i] = rand() % 9999;
}

void printArray (int a[], int n)
{
	for(int i=0; i<n; i++)
		printf("%d ", a[i]);
}



int main()
{
	int n, a[MAX];
	scanf("%d", &n);
	
	randomArray(a, n);
	printf("Mang sinh ngau nhien:\n");
	printArray(a, n);
	
	printf("\nCac so nguyen to trong mang\n");
	for(int i=0; i<n; i++)
	{
		if(isPrime(a[i],6))
			printf("%d  ", a[i]);
	}

	return 0;
}