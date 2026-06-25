//binary search for semi sorted array {4, 5, 6, 7, 1, 2, 3}
#include <iostream>
using namespace std;
int ssbin(int arr[], int n, int x){
	int low = 0;
	int high = n - 1;
	
	while(low <= high){
		int mid = low + (high - low) / 2;
		if(arr[mid] == x){
			return mid;
		}
		if(arr[low] <= arr[mid]){
			if(arr[low] <= x && x <= arr[mid]){
				high = mid - 1;
			}
			else{
				low = mid + 1;
			}
		}
		else{
			if(arr[mid] < x && x <= arr[high]){
				low = mid + 1;
			}
			else{
				high = mid -1;
			}
		}
	}
	return -1;
}
int main(){
	int arr[] = {4, 5, 6, 7, 1, 2, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<ssbin(arr, n, 2);
	return 0;
}