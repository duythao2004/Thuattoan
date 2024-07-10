#include<stdio.h>

int main()
{
    int i , n , a[100];
    printf("nhap n : \n");
    scanf("%d",&n);
    printf("nhap mang : \n");
    for( i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("mang b : ");
    for( i = 0 ; i < n ; i++)
    {
        if(a[i]>0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n");
    printf("mang c : ");
    for( i = 0 ; i < n ; i++)
    {
        if(a[i]<0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n");
    return 0;
    
}