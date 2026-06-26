//finding minimum in a rotated array using binary search, arr = {4, 5, 6, 7, 8, 0, 1}
#include <iostream>
using namespace std;
int minbin(int arr[], int n){
	int low = 0;
	int high = n - 1;

	while(low < high){
		int mid = low + (high - low) / 2;
		if(arr[mid] > arr[high]){
			low = mid + 1;
		}
		else{
			high = mid;
		}
	}
	return arr[low];
}
int main(){
	int arr[] = {4, 5, 6, 7, 8, 0, 1};
	int arr1[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	cout<<minbin(arr,n)<<endl;
	cout<<minbin(arr1,n1);
	return 0;
}