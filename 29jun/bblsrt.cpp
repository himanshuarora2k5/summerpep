#include <iostream>
using namespace std;
void bblsrt(int arr[], int n){
	for(int i = 0; i < n; i++){
		bool swap = false;
	
		for(int j = 0; j < n - i - 1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swap = true;
			}
		}
		if(!swap){
			break;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	bblsrt(arr, n);
	cout<<"sorted array: ";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}	
	return 0;
}