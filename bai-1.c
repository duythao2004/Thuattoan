#include<stdio.h>
#include<math.h>

int a,b,c,d,e,f;
float D,Dx,Dy;
float x,y;

void giaihe()
{
    D = (a*e)-(d*b);
    Dx = (c*e)-(f*b);
    Dy = (a*f)-(c*d);
    x = Dx/D;
    y = Dy/D;
    printf("x = %.2f ",x);
    printf("y = %.2f ",y);
}
int main()
{
    printf("nhap a: ");
    scanf("%d",&a);
    printf("nhap b: ");
    scanf("%d",&b);
    printf("nhap c: ");
    scanf("%d",&c);
    printf("nhap d: ");
    scanf("%d",&d);
    printf("nhap e: ");
    scanf("%d",&e);
    printf("nhap f: ");
    scanf("%d",&f);
    printf("phuong trinh co dang :\n %dx + %dy = %d \n %dx + %dy = %d \n ",a,b,c,d,e,f);
    giaihe();
}