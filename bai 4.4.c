#include<stdio.h>
int main()
{
    int n;
    printf("Nhap kich thuoc cua ma tran: ");
    scanf("%d",&n);
    int a[n][n],gan=1;
    int h1=0,h2=n-1,c1=0,c2=n-1;

    while(h1<=h2&&c1<=c2){
        for(int i=c1;i<=c2;i++){
            a[h1][i]=gan;
            gan++;
        }
        h1++;
        for(int i=h1;i<=h2;i++){
            a[i][c2]=gan;
            gan++;
        }
        c2--;
        if(c1<=c2){
            for(int i=c2;i>=c1;i--){
                a[h2][i]=gan;
                gan++;
            }
        }
        h2--;
        if(h1<=h2){
            for(int i=h2;i>=h1;i--){
                a[i][c1]=gan;
                gan++;
            }
        }
        c1++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%3d ",a[i][j]);
        }
        printf("\n");
    }

}
