#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]<0)
        {
            a[i]=0;
        }
    }
    printf("Cac phan tu cua mang la: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}

