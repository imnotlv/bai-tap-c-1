#include<stdio.h>
int main()
{
    int a,b;
    printf("hay nhap gia tri cua a,b ");
    scanf("%d%d",&a,&b);
    int tong=a+b,hieu=a-b,tich=a*b;
    printf("tong %d, hieu %d, tich %d,",tong,hieu,tich);
    float thuong=(float)a/b;
    if(b==0){
        printf("Khong hop le");
    }
    else(printf("thuong %f",thuong));
    return 0;
}
