//reverse an array

#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	reverse(arr);
	return 0;
}

int reverse(int n, int arr[]){
	int *lef = 