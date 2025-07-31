
/*
write a program to reverse a string.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int n = s.length();
    for(int i = 0; i < n/2; i++) {
        swap(s[i], s[n-1-i]);
    }
    cout << "Reversed String: " << s << endl;
    return 0;
}
