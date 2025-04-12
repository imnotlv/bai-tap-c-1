#include <stdio.h>
void b(int n)
{
    int d;
    if(n != 0)
    {
        d = n%2;
        b(n/2);
        printf("%d", d);
    }
}
int main(){
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    printf("He co so 2 ");
    b(n);
    printf("\n");
    printf("He co so 8 %o\n", n);
    printf("He co so 16 %x", n);
    return 0;
}

