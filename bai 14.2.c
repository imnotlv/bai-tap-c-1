#include<stdio.h>
int main()
{
    float gdp2014,tangtruong;
    int nam=2014;
    printf("Hay nhap GDP nam 2014 (USD): ");
    scanf("%f",&gdp2014);
    printf("Hay nhap toc do tang truong kinh te (%%): ");
    scanf("%f",&tangtruong);
    printf("%-10s%-10s\n","Nam","GDP");
    float gdp=gdp2014;
    for(int nam=2014; gdp<=2*gdp2014; nam++)
    {
        printf("%-10d%-10.2f\n",nam,gdp);
        gdp=gdp+gdp*(tangtruong/100);

    }
    return 0;

}
