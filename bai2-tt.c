#include <stdio.h>
#include <math.h>
#include "funsion.math.h"
long long power2(long long a, long long b)
 {
    long long result = 1;
    while (b > 0) {
        if (b % 2 == 1) 
		 { 
            result *= a; 
        }
        a *= a; 
        b /= 2; 
    }
    return result;
}

void solve (long long a, long long b)
{
	int flag = 0;
	for(long long i=a; i<=b; i++)
	{
		for(int j=2; j<=sqrt(b); j++)
		{
			if(i % j == 0)
			{
				flag = 0;
				break;
			}
			else
				flag = 1;
		}
		if(flag == 1)
			printf("%lld ", i);
	}
}

int main()
{
	long long n;
	printf("Nhap n = ");
	scanf("%lld", &n);
	
	long long a = power2(10, n - 1);
	long long b = power2(10, n) - 1;
	
	solve (a, b);
	
	return 0;
} 