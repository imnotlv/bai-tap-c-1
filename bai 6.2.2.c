#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("Hay nhap mot so nguyen: ");
    scanf("%d",&a);
    int sum=0,x=abs(a);
    for(int i=1; i<=x; i++)
    {
        if(x%i==0)
        {
            sum+=i;
        }
    }
    if(sum==2*x)
    {
        printf("%d la so hoan hao",x);
    }
    else
    {
        printf("%d khong phai so hoan hao",x);
    }
    return 0;
}
