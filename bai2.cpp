#include <stdio.h>

int main(){
	int arr[5];
	for (int i=0; i<5; i++){
		printf("Nhap phan tu a[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	printf("Mang vua nhao vao la: ");
	for (int i=0; i<5; i++){
		printf("%d ", arr[i]);
	}
	return 0; 
} 
