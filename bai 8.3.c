#include<stdio.h>
void sapxep(int n,int a[]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int k=a[j+1];
                a[j+1]=a[j];
                a[j]=k;
            }
        }
    }
}
int main()
{
    int m,n;
    printf("Nhap so luong phan tu cua mang 1: ");
    scanf("%d", &n);int a[n];

    printf("Nhap cac phan tu cua mang 1:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Nhap so luong phan tu cua mang 2: ");
    scanf("%d", &m);int b[m];

    printf("Nhap cac phan tu cua mang 2:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    sapxep(n,a);
    sapxep(m,b);

    int i=0,j=0,k=0,c[m+n];
    while(i<n&&j<m){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }else c[k++]=b[j++];
    }
    while(i<n){
        c[k]=a[i];
        i++,k++;
    }
    while(j<m){
        c[k]=b[j];
        j++,k++;
    }
    printf("Mang moi sau khi da tron hai mang: ");
    for(int k=0;k<m+n;k++){
        printf("%d ",c[k]);
    }
    return 0;

}
