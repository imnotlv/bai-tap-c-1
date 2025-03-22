#include<stdio.h>
    int main()
    {
        int n,sum=1;
        float tong=0;
        printf("Hay nhap mot so nguyen: ");
        scanf("%d",&n);
        if(n>=1)
        {
            for(int i=1; i<=n; i++)
            {
                sum=sum*i;
                tong=tong+1/(float)sum;
            }
        }
        else if(n<=0)
        {
            printf("Khong hop le");
            return 1;
        }
        printf("%f ",tong);
        return 0;
    }


