#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,f;
    printf("ax+by=c\n");
    printf("dx+ey=f\n");
    printf("Hay nhap lan luot a, b, c, d, e, f : \n");
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
    float x,y;
    float D=a*e-b*d;
    float D1=a*f-c*d;
    float D2=-b*f+c*e;
    if(D==0){
        if(D1==0&&D2==0){
            printf("He phuong trinh vo so nghiem\n");
        }
        else{
            printf("He phuong trinh vo nghiem\n");
        }
    }
    else{
        x=D1/D;
        y=D2/D;
        printf("He phuong trinh co nghiem duy nhat (x,y)=(%0.2f,%0.2f)",x,y);
    }
    return 0;

}
