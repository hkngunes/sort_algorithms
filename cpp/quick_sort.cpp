#include <iostream>
using namespace std;

void QuickSort(int* arr, size_t size){
	size_t s=0;
	if(size <=1) return;
	for(auto i = 0; i<size-1;i++){
		if(arr[i]<arr[size-1]){
			if(i!=s){
				swap(arr[i],arr[s]);
			}
			s++;
		}
	}
	swap(arr[size-1],arr[s]);
	QuickSort(arr,s);
	QuickSort(arr+s+1,size-s-1);
}

int main(){
	int arr[] = {3,5,7,6,4,8,7,6,9,0,2,1,3};
	size_t size = sizeof(arr)/sizeof(int);
	QuickSort(arr,size);
	for(auto i:arr) cout << i << "\t";
	cout << endl;
	return 0;
}
