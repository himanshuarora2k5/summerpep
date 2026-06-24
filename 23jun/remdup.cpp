//remove duplicates from a SORTED array only
#include <iostream>
using namespace std;
int remdup(int arr[], int n){
	int i = 0;
	for(int j = 1; j < n; j++){
		if(arr[j] != arr[i]){
			i++;
			arr[i] = arr[j];
		}
	}
	return i + 1;
}
int main(){
	int arr[] = {1,1,1,1,2,2,2,2,3,3,3,3,3,4,4,4,4,5,5,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	int newsz = remdup(arr, n);
	
	for(int i = 0; i < newsz; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}