#include<stdio.h>
int main()
{
    int n;
    printf("Hay nhap do lon cua mang: ");
    scanf("%d",&n);
    int a[n];
    printf("Hay nhap cac gia tri cua mang: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
//Phan tu lon nhat trong mang
    int max=a[0],b=0;
    for(int i=1;i<n;i++){
        if(a[i]>max) {
            max=a[i];
            b=i;}
    }
    printf("Gia tri lon nhat trong mang la gia tri thu %d: %d \n",b+1,max);
//Phan tu be nhat trong mang
    int min=a[0],c=0;
    for(int i=1;i<n;i++){
        if(a[i]<min) {
            min=a[i];
            c=i;}}
    printf("Gia tri be nhat trong mang la gia tri thu %d: %d \n",c+1,min);
    return 0;


}
