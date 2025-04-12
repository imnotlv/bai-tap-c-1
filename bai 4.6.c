#include <stdio.h>
void he(int a[], int l, int r, int mid){
    int n1 = mid - l + 1, n2 = r - mid;
    int x[n1], y[n2];
    for(int i  = 0; i < n1; i++){
        x[i] = a[l + i];
    }
    for(int i  = 0; i < n2; i++){
        y[i] = a[mid + i  +1];
    }
    int i = 0, j = 0;
    int t = l;
    while(i < n1 && j < n2){
        if(x[i] <= y[j])
            a[t++] = x[i++];
        else
            a[t++] = y[j++];
    }
    while(i < n1)
        a[t++] = x[i++];
    while(j < n2)
        a[t++] = y[j++];
}
void hehe(int a[], int l, int r){
    if(l < r){
        int mid = (l + r)/ 2;
        hehe(a, l, mid);
        hehe(a, mid + 1, r);
        he(a, l, r, mid);
    }
}
int main(){
    int n;
    printf("So phan tu cua mang la: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap cac phan tu cua mang: ");
    for(int i = 0; i < n; i++)
         scanf("%d", a + i);
    hehe(a, 0, n - 1);
    printf("Cac phan tu cua mang sau khi sap xep: ");
    for(int i = 0; i < n; i++){
        printf("%d ", *(a + i));
    }
    return 0;
}
