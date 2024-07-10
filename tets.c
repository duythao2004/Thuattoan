#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int isPrime(int n)
{
    if(n < 2)
        return 0;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}


int power(int a, int k, int m)
{
    int b = 1;
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

int main()
{
    int N;
    printf("Nhap N (0 < N < 1000): ");
    scanf("%d", &N);
    
    srand(time(NULL));
    int p = rand() % (999 - 1 + 1) + 1;
    printf("Random: p = %d\n", p);
    for(int a = 1; a < N; a++)
    {
        
        
      
        int result = power(a, p, N);
        
        
        if(isPrime(result))
        {
            printf("%d ^ %d mod %d = %d is prime\n", a, p, N, result);
        }
    }

    return 0;
}
