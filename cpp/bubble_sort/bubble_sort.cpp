#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> arr={3,6,5,7,1,8,2,9,4};
//	bubble_sort(&arr);
	for(auto i:arr) cout << i << "\t";
	cout << endl;
	return 0;
}
