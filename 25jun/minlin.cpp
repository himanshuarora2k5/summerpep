//finding minimum in a rotated array using linear search, arr = {4, 5, 6, 7, 8, 0, 1}
#include <iostream>
using namespace std;

int minlin(int arr[], int n){
	int min = arr[0];
	for(int i = 0; i < n; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	return min;
}
int main(){
	int arr[] = {4, 5, 6, 7, 8, 0, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<minlin(arr, n)<<endl;
	return 0;
}
