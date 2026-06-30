#include <iostream>
using namespace std;
void slcsrt(int arr[], int n){
	for(int i = 0; i < n - 1; i++){
		int mindex = i;
		
		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[mindex]){
				mindex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[mindex];
		arr[mindex] = temp;
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	slcsrt(arr, n);
	cout<<"sorted array: ";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}	
	return 0;
}
	
