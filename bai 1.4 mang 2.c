#include <stdio.h>

void in_mang(float mang[3][3])
{
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%g ", mang[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    float mang1[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    float mang2[3][3];
    printf("Nhap mang 2 (3x3) \n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("Phan tu hang %d cot %d: ",i,j);
            scanf("%f", &mang2[i][j]);
        }
    }
    printf("Mang 1: \n");
    in_mang(mang1);
    printf("\n");
    printf("Mang 2: \n");
    in_mang(mang2);
    return 0;
}
