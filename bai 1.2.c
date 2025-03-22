#include<stdio.h>
int main()
{
    int a,s=0;
    for(int i=1;i<=10;i++){
    printf("Hay nhap so nguyen thu %d : ",i);
    scanf("%d",&a);
    s+=a;
    }
    printf("Tong 10 so vua nhap : %d ",s);
    return 0;
}
