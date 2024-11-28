#include <stdio.h>

int main(){
	int arr1[5]={1,5,8,4,6};
	int arr2[5];
	int num;
	printf("Mang luc dau la: ");
	for (int i=0; i<5; i++){
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i=0; i<5; i++){
		num = 0;
		if (arr1[i]%2==0){
			num = arr1[i]+3;
			arr2[i]=num;
		} else {
			num = arr1[i]+2;
			arr2[i]=num;
		} 
	}
	printf("Mang luc sau la: ");
	for (int i=0; i<5; i++){
		printf("%d ", arr2[i]);
	}
	return 0; 
} 
