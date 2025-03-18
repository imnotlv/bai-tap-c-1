#include<stdio.h>
#include<math.h>
int main()
{
    int r;
    printf("Hay nhap ban kinh khoi cau :");
    scanf("%d",&r);
    float S=4*3.14*pow(r,2),V=((float)4/3)*3.14*pow(r,3);
    printf("Dien tich khoi cau la :%f\nThe tich khoi cau la :%f",S,V);
    return 0;
}
