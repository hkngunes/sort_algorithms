#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int> &arr){
	for(auto i = arr.size()-1;i>0;i--){
		for(auto j = 0; j < i; j++){
			if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
		}
	}
}

int main(){
	vector<int> arr={3,6,5,7,1,8,2,9,4};
	BubbleSort(arr);
	for(auto i:arr) cout << i << "\t";
	cout << endl;
	return 0;
}
