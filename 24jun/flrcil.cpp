//floor and ceil
#include <iostream>
using namespace std;
int flr(int arr[], int n, int x){
	int low = 0;
	int high = n - 1;
	int ans = -1;
	
	while(low <= high){
		int mid = low + (high - low) / 2;
		if(arr[mid] <= x){
			ans = arr[mid];
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return ans;
}
int cil(int arr[], int n, int x){
	int low = 0;
	int high = n - 1;
	int ans = -1;
	
	while(low <= high){
		int mid = low + (high - low) / 2;
		if(arr[mid] >= x){
			ans = arr[mid];
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	return ans;
}
int main(){
	int arr[] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 5;
	cout<<"floor of "<<x<<": "<<flr(arr, n, x)<<endl;
	cout<<"ceil of "<<x<<": "<<cil(arr, n, x);
	return 0;
}