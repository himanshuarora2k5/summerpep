//move zeroes to end in arr = [1,0,2,0,3,0,4,5]
#include <iostream>
#include <algorithm>
using namespace std;
void movzs(int arr[], int n){
	int j=0, temp, i;
	for(i = 0; i < n; i++){
		if(arr[i] != 0 && arr[j] == 0){
			swap(arr[i], arr[j]);
		}
		if(arr[j] != 0){
			j = j + 1;
		}
	}
}
int main(){
	int arr[] = {1,0,2,0,3,0,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	movzs(arr, n);
	for (int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
