#include<stdio.h>
int main()
{
    int n;
    int sum=1;
    printf("Hay nhap mot so nguyen: ");
    scanf("%d",&n);
    if(n>=1)
    {
        for(int i=1; i<=n; i++)
        {
            sum=sum*i;
        }
    }
    else if(n<0)
    {
        printf("Khong hop le");
    }
    printf("Gia tri cua %d! la: %d ",n,sum);
    return 0;
}
