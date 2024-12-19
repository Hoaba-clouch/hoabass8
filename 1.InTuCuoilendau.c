#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap so dong: ");
    scanf("%d",&a);
    printf("Nhap so cot: ");
    scanf("%d",&b);

    int arr[a][b]; 
    printf("Nhap cac phan tu mang 2 chieu:\n");
    for(int n = 0; n<a; n++){
        for(int h = 0; h<b; h++) {
            printf("Phan tu arr[%d][%d]: ", n, h);
            scanf("%d", &arr[n][h]);
        }
    }
    printf("Cac phan tu trong mang tu cuoi ve dau :\n");
    for (int n = a - 1; n >= 0; n--) {
        for (int h = b - 1; h >= 0; h--) {
            printf("%d ", arr[n][h]);
        }
    }
    printf("\n");

    return 0;
}
