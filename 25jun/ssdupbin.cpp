//search in rotated sorted array with duplicates, arr = {2, 2, 2, 3, 1, 2} or arr = {2, 2, 2, 2, 1, 2}
#include <iostream>
using namespace std;
int ssdupbin(int arr[], int n, int x){
	int low = 0;
	int high = n - 1;
	
	while(low <= high){
		int mid = low + (high - low) / 2;
		if(arr[mid] == x){
			return mid;
		}
		if(arr[low] == arr[mid] && arr[high] == arr[mid]){	//new condition added with ssbin
			low++;
			high--;
			continue;
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
	int arr[] = {2, 2, 2, 3, 1, 2};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<ssdupbin(arr, n, 3);
	return 0;
}