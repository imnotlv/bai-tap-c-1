#include <stdio.h>
void s(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int main(){
    int a, b;
    printf("Nhap gia tri a va b : ");
    scanf("%d%d", &a, &b);
    s(&a, &b);
    printf("Gia tri a va b sau khi hoan doi: %d %d", a, b);
    return 0;
}


