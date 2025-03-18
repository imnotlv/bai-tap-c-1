
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    printf("Hay nhap 3 canh a, b, c : ");
    scanf("%lf %lf %lf",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        if(a == b && b == c){
        printf("Tam giac deu\n");
        }
        else if((fabs(a * a + b * b - c * c) < 1e-6 || fabs(a * a + c * c - b * b) < 1e-6 || fabs(b * b + c * c - a * a) < 1e-6)&&(a == b || b == c || a == c)){
        printf("Tam giac vuong can\n");
        }
        else if((fabs(a * a + b * b - c * c) < 1e-6 || fabs(a * a + c * c - b * b) < 1e-6 || fabs(b * b + c * c - a * a) < 1e-6)){
            printf("Tam giac vuong\n");
        }
        else if(a == b || b == c || a == c){
        printf("Tam giac can\n");
        }
        else{
            printf("Tam giac thuong\n");
        }
        double p = (a + b + c) / 2;
        double dientich=sqrt(p * (p - a) * (p - b) * (p - c)),chuvi=a+b+c;
        printf("Dien tich tam giac la : %0.2lf\n",dientich);
        printf("Chu vi tam giac la : %0.2lf",chuvi);

    }else{printf("Khong ton tai tam giac nay");}
    return 0;

}



