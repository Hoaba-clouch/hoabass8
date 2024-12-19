#include <stdio.h>

int main() {
	int a, b, c, d=0, arr[a][b];
	printf("Nhap so dong: ");
	scanf("%d",&a);

	printf("Nhap so cot: ");
	scanf("%d",&b);

	printf("Nhap cac phan tu mang 2 chieu:\n");
	for(int n = 0; n<a; n++) {
		for(int h = 0; h<b; h++) {
			printf("Phan tu arr[%d][%d]: ", n, h);
			scanf("%d", &arr[n][h]);
		}
	}
	printf("Nhap phan tu can kiem tra: ");
	scanf("%d", &c);
	for (int n = 0; n<a; n++) {
		for (int h = 0; h<b; h++) {
			if (arr[n][h]==c) {
				printf("Phan tu co tai vi tri:dong %d, cot %d\n", n, h);
				d=1;
			}

		}
	}
	if (!d) {
		printf("Phan tu khong ton tai\n");
	}
	return 0;
}