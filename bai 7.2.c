#include<stdio.h>
int main()
{
    int n;
    printf("Hay nhap mot so nguyen: ");
    scanf("%d",&n);
    float sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+1/(float)i;
    }
    printf("%f",sum);
    return 0;
}
