#include <stdio.h>

void swap(int* p1, int* p2){
	int t = *p1;
	*p1=*p2;
	*p2=t;
}

void QuickSort(int* arr, size_t size){
	size_t s=0;
	if(size <=1) return;
	for(size_t i=0;i<size-1;i++){
		if(arr[i]<arr[size-1]) {
			if(s!=i) swap(&arr[i],&arr[s]);
			s++;
		}
	}
	swap(&arr[s],&arr[size-1]);
	QuickSort(arr, s);
	QuickSort(arr+s+1,size-s-1);
}

int main(){
	int arr[] = {3,5,4,8,7,9,6,2,1,5,6};
	size_t size = sizeof(arr)/sizeof(int);
	QuickSort(arr, size);
	for(size_t i=0;i<size;i++) printf("%d\t",arr[i]);
	printf("\n");
	return 0;
}
