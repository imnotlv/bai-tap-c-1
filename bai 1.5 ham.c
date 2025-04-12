#include <stdio.h>
#include <math.h>

double ham_mu(float x, int y)
{
    double tich = 1;
    if (y == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= abs(y); i++)
        {
            tich = tich * x;
        }
        if (y > 0)
        {
            return tich;
        }
        else
        {
            return (1 / tich);
        }
    }
}
int main()
{
    int y;
    float x;
    printf("Nhap x va y: ");
    scanf("%f %d", &x, &y);
    if (x == 0)
    {
        if (y <= 0)
        {
            printf("Loi phep tinh");
        }
        else
        {
            printf("%g mu %d: 0", x, y);
        }
    }
    else
    {
        printf("%g mu %d: %g", x, y, ham_mu(x, y));
    }
    return 0;
}

