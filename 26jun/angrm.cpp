//check anagram
#include <iostream>
#include <string>
using namespace std;
/*
string frq(string s){
	int arr[26] = {0};
	for(char ch : s){
		arr[ch - 'a']++;
	}
	for(int i = 0; i < 26; i++){
		if(arr[i] > 0){
			cout<<char('a' + i)<<arr[i];
		}
	}
}
bool angrm(string s1, string s2){
	if(frq(s1) == frq(s2)){
		return true;
	}
	else{
		return false;
	}
}
*/
bool angrm(string s1, string s2) {
    if(s1.length() != s2.length())
        return false;

    int freq[26] = {0};

    for(char ch : s1)
        freq[ch - 'a']++;

    for(char ch : s2)
        freq[ch - 'a']--;

    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0)
            return false;
    }

    return true;
}
int main(){
	string s1, s2;
	cin>>s1;
	cin>>s2;
	if(angrm(s1, s2)){
		cout<<s1<<" & "<<s2<<" are anagram";
	}
	else{
		cout<<s1<<" & "<<s2<<" are NOT anagram";
	}
	return 0;
}
	