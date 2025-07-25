
/*
write a cpp program to convert upper case to lower case
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    cout << "Enter a string in uppercase: ";
    getline(cin, input);
    for(int i = 0; i < input.length(); i++) {
        if(input[i] >= 'A' && input[i]<= 'Z') {
            input[i] = input[i] + 32;
        }
    }
    cout << "Lowercase String: " << input << endl;
    return 0;
}
