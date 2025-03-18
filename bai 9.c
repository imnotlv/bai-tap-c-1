#include<stdio.h>
int main()
{
    int ngay, thang, nam;
    printf("Nhap nam "); scanf("%d",&nam);
    printf("Nhap thang "); scanf("%d",&thang);
    if(thang<1||thang>12){
        printf("Nhap thang khong hop le\n");
        return 1;
    }
    else if(thang==9||thang==4||thang==6||thang==11){
        ngay=30;
    }
    else if(thang==2){
        if(((nam%400)==0)||((nam%4==0)&&(nam%100!=0))){
        ngay=29;
        } else{
            ngay=28;}
    }

    else{
        ngay=31;
    }
    printf("Thang %d nam %d co %d ngay ",thang,nam,ngay);
    return 0;
}
