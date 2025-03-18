#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Nhap vao a, b, c : ");
    scanf("%f%f%f",&a,&b,&c);
    printf("Phuong trinh co dang %0.0fx^2+%0.0fx+%0.0f=0\n",a,b,c);
    if(a==0){
        if(b==0){
            if(c==0){
                printf("Phuong trinh vo so nghiem.\n");
            }
                else{printf("Phuong trinh vo nghiem.\n");}
        }
       else{ printf("Phuong trinh co nghiem x=  %0.2f\n",-c/b);}
    }
    else{
        float delta=b*b-4*a*c;
        if(delta>0){
            float x1=(-b+sqrt(delta))/(2*a);
            float x2=(-b-sqrt(delta))/(2*a);
            printf("Phuong trinh co 2 nghiem x1, x2 lan luot la : %0.2f %0.2f\n",x1,x2);
        }
        else if(delta==0){
            printf("Phuong trinh co nghiem kep x= %0.2f\n",-b/2*a);
        }
        else{
            printf("Phuong trinh vo nghiem");
        }
    }
    return 0;

}
