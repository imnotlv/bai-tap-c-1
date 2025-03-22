#include<stdio.h>
int main()
{
    int a,n;
    printf("Hay nhap so tien muon gui: ");
    scanf("%d",&a);
    float tong=a;
    printf("Hay nhap so thang muon gui: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            tong=tong+(tong*45/1000);
    }
    printf("Tong tien nhan sau %d thang: %.2f",n,tong);
    return 0;
}
