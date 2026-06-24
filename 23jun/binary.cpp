//binary search
#include <iostream>
using namespace std;
int binary(int arr[], int x){
	int low = 0;
	int high = n - 1;
	while(low <= high){
		int mid = low + (high - low) / 2;
		if(arr[mid] == x){
			return mid;
		}
		else if(arr[mid] < x){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return -1;
}
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int x = 9;
	if(binary(arr, x) == -1)