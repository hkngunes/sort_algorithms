#include <iostream>
#include <vector>
using namespace std;

void QuickSort(vector<int> &arr){
	size_t s=0;
	size_t size = arr.size();
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
	vector<int> v1(arr.begin(),arr.begin()+s);
	vector<int> v2(arr.begin()+s,arr.begin()+s+1);
	vector<int> v3(arr.begin()+s+1,arr.end());
	QuickSort(v1);
	QuickSort(v3);
	v1.insert(v1.end(),v2.begin(),v2.end());
	v1.insert(v1.end(),v3.begin(),v3.end());
	swap(arr,v1);
}

int main(){
	vector<int> arr = {3,5,7,6,4,8,7,6,9,0,2,1,3};
	size_t size = sizeof(arr)/sizeof(int);
	QuickSort(arr);
	for(auto i:arr) cout << i << "\t";
	cout << endl;
	return 0;
}
