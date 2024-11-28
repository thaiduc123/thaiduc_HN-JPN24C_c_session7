#include <stdio.h>

int main(){
	int arr[5]={1,5,2,8,7};
	int count=0;
	for (int i=0; i<5; i++){
		if (arr[i]%2==0){
			count+=1;
			printf("%d ", arr[i]);
		} else{
			count+=0;
		}
	}
	if (count<1){
		printf("Khong co so chan");
	}
	return 0; 
} 
