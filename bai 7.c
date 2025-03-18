#include<stdio.h>
int main()
{
    float a;
    printf("Hay nhap diem trung binh cua ban : ");
    scanf("%f",&a);
    if(a>=9&&a<=10){
        printf("Xuat xac");
    }
    else if((8<=a)&&(a<9)){
        printf("Gioi");
    }
    else if(a>=7&&a<8){
        printf("Kha");
    }
    else if(a>=5&&a<7){
        printf("TB");
    }
    else if(a<5){
        printf("Yeu");
    }
    else{
        printf("Nhap so diem khong hop le");
    }
    return 0;
}
