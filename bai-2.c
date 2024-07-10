#include<stdio.h>
#include<math.h>

int n,i,j,min,max,tempt;
int a[100];

void Min_Max()
{
    min = a[0];
    max = a[0];
    for(i = 0 ; i <n ; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Min = %d \nMax = %d \n",min,max);
}

void Sap_xep_tang_dan()
{
    for(i = 0 ; i < n - 1 ; i++)
    {
        for(j = i + 1 ; j < n ; j++)
        {
            if(a[i] > a[j])
            {
                tempt = a[i];
                a[i] = a[j];
                a[j] = tempt;
            }
        }
    }
}

int main()
{
    printf("nhap n : ");
    scanf("%d",&n);
    printf("nhap mang : ");
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    Min_Max();
    Sap_xep_tang_dan();
    for(i = 0 ; i < n ; i++)
    {
        printf("%d ",a[i]);
    }
}