//take string input and output each char's frequency by making a 26 character array with index as a key and updating the value of each key as per the string, abbcdde --> a1b2c1d2e1
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

    for(int i = 0; i < 26; i++) {
        if(freq[i] > 0) {
            cout << char('a' + i) << freq[i];
        }
    }

    return 0;
}