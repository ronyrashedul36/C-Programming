/*
write a function void changeCaseAndReverse(Char *s) using c programming language that will print the characters in the string S in reverse order and will also change the uppercase letters to lowercase and lowercase letters to uppercase. For example if you call changeCaseAndReverse("Hello There"), it will print EREHtOLLEh.
*/

#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);  // use getline to accept spaces too
    int n = s.size();
    string reverseString = "";

    for (int i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;  // to uppercase
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;  // to lowercase
        }
        // other characters remain unchanged
    }

    for (int i = n - 1; i >= 0; i--) {
        reverseString += s[i];
    }

    cout << reverseString << endl;
    return 0;
}
