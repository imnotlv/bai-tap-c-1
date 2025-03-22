#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,ucln,bcnn;
    printf("Hay nhap hai so nguyen: ");
    scanf("%d %d",&a,&b);
    int x=abs(a),y=abs(b);
    int min=(x<y)?x:y;
    for(int i=1;i<=min;i++){
        if((x%i==0)&&(y%i==0)){
            ucln=i;
        }
    }
    bcnn=(x*y)/ucln;
    printf("Uoc chung lon nhat cua %d va %d la %d:\n",x,y,ucln);
    printf("Boi chung nho nhat cua %d va %d la %d:",x,y,bcnn);
    return 0;
}
