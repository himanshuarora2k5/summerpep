//first occurance in a sorted array (using binary search)
#include <iostream>
using namespace std;
int frstocc(int arr[], int n, int x){
	int low = 0;
	int high = n - 1;
	int ans = -1;
	
	while(low <= high){
		int mid = low + (high - low) / 2;
		
		if(arr[mid] == x){
			ans = mid;
			high = mid - 1;
		}
		else if(arr[mid] < x){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return ans;
}

int main(){
	int arr[] = {1,2,2,2,3,3,4,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 3;
	
	cout<<frstocc(arr, n, x);
	return 0;
}