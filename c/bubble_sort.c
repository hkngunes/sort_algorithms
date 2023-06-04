#include <stdio.h>

void swap(int* p1, int* p2){
	int t = *p1;
	*p1 = *p2;
	*p2 = t;
}

void BubbleSort(int* arr, size_t size){
	for(size_t i=size-1;i>0;i--){
		for(size_t j=0;j<i;j++){
			if(arr[j]>arr[j+1]) swap(&arr[j], &arr[j+1]);
		}
	}
}

int main(){
	int arr[] = {5,3,7,6,1,9,4,8,2};
	size_t size = sizeof(arr)/sizeof(int);
	BubbleSort(arr,size);
	for(size_t i =0;i<size;i++) printf("%d\t",arr[i]);
	printf("\n");
	return 0;
}

