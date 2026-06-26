//finding peak(highest) element in an array by taking an element comparing it with its adjacent elements and moving on if the condition is not satisfied (binary search), arr = {1, 2, 4, 5, 7, 8, 3} NOTE: it is assuming n > 1, and there are no duplicates
#include <iostream>
using namespace std;
int peakbin(int arr[], int n){
	int low = 0;
	int high = n - 1;

	while(low < high){
		int mid = low + (high - low) / 2;
		if(arr[mid] < arr[mid+1]){
			low = mid + 1;
		}
		else{
			high = mid;
		}
	}
	return arr[low];
}
int main(){
	int arr[] = {1, 2, 4, 5, 7, 8, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<peakbin(arr,n)<<endl;
	return 0;
} 
