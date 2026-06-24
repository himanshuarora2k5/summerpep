//check if the array is palindrome [1,2,3,2,1]
#include <iostream>
using namespace std;
bool palindrome(int arr[], int n){
	int lef = 0;
	int rig = n - 1;
	
	while(lef < rig){
		if(arr[lef] != arr[rig]){
			return false;
		}
		lef++;
		rig--;
	}
	return true;
}
int main(){
	int arr[] = {1,2,3,2,1};
	int n = sizeof(arr) / sizeof(arr[0]);
	if(palindrome(arr, n)){
		cout<<"palindrome";
	}
	else{
		cout<<"not a palindrome";
	}
	return 0;
}
