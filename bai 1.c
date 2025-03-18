#include<stdio.h>
int main()
{
    float x;
    printf("Hay nhap gia tri cua x =");
    scanf("%f",&x);
    float a=pow(x,2);
    printf("gia tri cua x^2 la %f\n",a);
    float b=pow(x,3);
    printf("gia tri cua x^3 la %f \n",b);
    float c=pow(x,4);
    printf("gia tri cua x^4 la %f",c);
    return 0;
}
