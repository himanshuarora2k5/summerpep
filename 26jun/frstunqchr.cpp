//finding the first uqiue character's index in a string, "leetcode" --> "ltcod" so answer is index 0
#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cin >> s;

	int freq[26]={0};

	for(char ch : s) {
		freq[ch - 'a']++;
	}

	for(int i = 0; i < s.length(); i++) {
        	if(freq[s[i] - 'a'] == 1) {
			cout << "first unique character in "<<s<<" is: '"<<s[i]<<"' and its index is: "<<i;
			return 0;		
        	}
	}
	cout << -1;
	return 0;
}