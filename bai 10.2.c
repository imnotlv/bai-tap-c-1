#include<stdio.h>
int main()
{
    int n;
    int f1=1,f2=1,fn;
    printf("Hay nhap so n: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Nhap so khong hop le");
        return 0;
    }else if(n==1||n==2){
        fn=1;
        }
    else{
        for(int i=3;i<=n;i++){
            fn=f1+f2;
            f1=f2;
            f2=fn;
        }
    }
    printf("So Fibonacci thu %d la: %d\n", n, fn);
    return 0;

}
