#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int KiemTra(int n)
{
    if (n<2)
    {
        return 0;
    }

    int i;
    for (i = 2; i<= sqrt(n); i++)
    {

        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n,check,dem=0;
    printf("nhap n : \n");
    scanf("%d", &n);
    int a[n];
    printf("nhap mang : \n");
    for (int i = 0; i<n;i++){
        scanf("%d",&a[i]);
        check = KiemTra(a[i]);
        if (check == 1){
            dem ++;
        }
    }
    printf("So cac nguyen to trong mang la : %d",dem);

}