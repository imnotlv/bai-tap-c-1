#include <stdio.h>
int main(){
    int x,p = 0,n = 0;
    double tb = 0,tbd = 0,tba = 0;
    printf("Nhap so luong phan tu va cac phan tu cua mang: ");
    scanf("%d", &x);
    int a[x];
    for (int i = 0; i < x; i++ ){
        scanf("%d", &a[i]);
        tb += a[i];
    }
    for (int i = 0; i < x; i++ ){
        if (a[i] > 0){
            tbd += a[i];
            p++;
        } else if (a[i] < 0){
            tba += a[i];
            n++;
        }
    }
    printf("Trung binh cong cua mang la %.2lf\n",tb/x);
    if (p > 0)
        printf("Trung binh cong cua cac so nguyen duong la %.2lf\n", tbd / p);
    else
        printf("Khong co so nguyen duong trong mang.\n");

    if (n > 0)
        printf("Trung binh cong cua cac so nguyen am la %.2lf\n", tba / n);
    else
        printf("Khong co so nguyen am trong mang.\n");
    return 0;
}
