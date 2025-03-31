#include <stdio.h>

int main() {
    int n, dem = 0, x;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Nhap gia tri can dem: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            dem++;
        }
    }

    printf("Gia tri %d xuat hien %d lan trong mang.\n", x, dem);
    return 0;
}

