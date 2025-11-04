#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        string s,t;
        cin >> s >> t;
        int l = s.size();
        map<char,int> m;
        for(int i = 0; i < l; i++) {
            m[s[i]]++;

        }
        bool b = false;
        for(int i = 0; i < l; i++) {
            if(m[t[i]]){
                m[t[i]]--;
                continue;
            }
            b = true;
            break;
        }
        if(b) {
            cout <<"NO\n";
            continue;
        }
        cout <<"YES\n";
    }
    return 0;
}
