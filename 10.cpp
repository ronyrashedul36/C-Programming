
/*
তোমার ক্লাসের ছাত্রদের তালিকা Sort করার জন্য একটি সি++ প্রোগ্রাম লিখুন। এখানে কোন বিল্ট ইন ফাংশন ব্যবহার করা যাবে না
*/
#include<bits/stdc++.h>

using namespace std;

int compareString(const char s1[], const char s2[])
{
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0')
        {
            if(s1[i] != s2[i])
                {
                    return s1[i]-s2[i];
                }
            i++;
        }
    return s1[i]-s2[i];
}

void swapStrings(char s1[], char s2[])
{

    char temp;
    int i = 0;
    while(s1[i] != '\0' || s2[i] != '\0')
        {
            temp = s1[i];
            s1[i] = s2[i];
            s2[i] = temp;
            i++;
        }

}

int main()
{
    int n;
    cin >> n;
    char names[n][100];
    for(int i = 0; i < n; i++)
        {
            cin >> names[i];
        }
    for(int i = 0; i < n - 1; i++)
        {
            for(int j = i+1; j < n; j++)
                {
                    if(compareString(names[i], names[j]) > 0)
                        {
                            swapStrings(names[i], names[j]);
                        }
                }
        }
    for(int i = 0; i < n; i++)
        {
            cout << names[i] << endl;
        }
    return 0;
}
