#include<stdio.h>
void nhap(int n,int m,int a[][100])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("Phan tu hang %d cot %d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void in(int n,int m,int a[][100])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n,m,l;
    int a[100][100],b[100][100],c[100][100];

    printf("Nhap so hang cua ma tran A: ");
    scanf("%d",&n);
    printf("Nhap so cot(hang) cua ma tran A(B): ");
    scanf("%d",&m);
    printf("Nhap so cot cua ma tran B: ");
    scanf("%d",&l);

    printf("Nhap ma tran A\n");
    nhap(n,m,a);
    in(n,m,a);

    printf("Nhap ma tran B\n");
    nhap(m,l,b);
    in(m,l,b);

    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            c[i][j]=0;
            for(int k=0;k<m;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    printf("Ma tran C=A*B la:\n");
    in(n,l,c);
    return 0;
}
