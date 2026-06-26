//take string input and output each char's frequency by making a 26 character 2d array with each letter being assigned a number and working as a key and updating the value of each key as per the string, abbcdde --> a1b2c1d2e1
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;

    int freq[26][2];

    for(int i = 0; i < 26; i++) {
        freq[i][0] = 'a' + i; // store character
        freq[i][1] = 0;       // frequency
    }

    for(char ch : s) {
        freq[ch - 'a'][1]++;
    }

    for(int i = 0; i < 26; i++) {
        if(freq[i][1] > 0) {
            cout << char(freq[i][0]) << freq[i][1];
        }
    }

    return 0;
}