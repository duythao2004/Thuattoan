#ifndef funsion_Math
#define funsion_Math
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include<time.h>
long long power(long long a, long long k, long long m)
{	
	long long b = 1;
	long long A = a;
	if(k % 2 == 1)
		b = a;
	k /= 2;
	while(k > 0)
	{
		A = (A * A) % m;
		if(k % 2 == 1)
			b = (b * A) % m;
		k /= 2;
	}
	return b;
}
int miillertest(int d, int n){
    srand(time(0));
    int a = 2 + rand() % (n - 4);
 
    int x = power(a, d, n);
 
    if (x == 1  || x == n-1)
       return 1;
 
    while (d != n-1)
    {
        x = (x * x) % n;
        d *= 2;
 
        if (x == 1)      return 0;
        if (x == n-1)    return 1;
    }
 
    return 0;
}
 

int isPrime(int n, int k)
{
    if (n <= 1 || n == 4)  return 0;
    if (n <= 3) return 1;
    int d = n - 1;
    while (d % 2 == 0)
        d /= 2;
 
    for (int i = 0; i < k; i++)
         if (!miillertest(d, n))
              return 0;
 
    return 1;
}

#endif