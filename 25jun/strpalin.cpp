//check if a string is palindrome or not, "A man, a plan, a canal: Panama", "race a car", works with special characters and spaces aswell
#include <iostream>
#include <cctype>
using namespace std;

bool strpalin(string s){
	int lef = 0;
	int rig = s.length() - 1;

	while(lef < rig){
		
		while(lef < rig && !isalnum(s[lef])){
			lef++;
		}
		while(lef < rig && !isalnum(s[rig])){
			rig--;
		}
		if(tolower(s[lef]) != tolower(s[rig])){
			return false;
		}
		lef++;
		rig--;
	}
	return true;
}
int main(){
	string s;
	getline(cin, s);
	if(strpalin(s)){
		cout<<s<<endl<<"is a palindrome"<<endl;
	}
	else{
		cout<<s<<endl<<"is NOT a palindrome"<<endl;
	}
	return 0;
}
	