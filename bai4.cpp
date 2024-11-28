#include <stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	int arr[n];
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		printf("Nhap phan tu a[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	printf("Mang vua nhao vao la: ");
	for (int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	return 0; 
} 
