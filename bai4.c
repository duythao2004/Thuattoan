#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    int S , p;
HAHA: printf("nhap a: ");
    scanf("%d",&a);
    printf("nhap b: ");
    scanf("%d",&b);
    printf("nhap c: ");
    scanf("%d",&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        p = (a+b+c)/2;
        S = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("dien tich = %d \n",S);
        printf("chu vi = %d \n",(a+b+c));
    }
    else
    {
        printf("moi nhap lai a,b,c: \n");
        goto HAHA;
    }


}
