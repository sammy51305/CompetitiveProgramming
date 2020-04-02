#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    if(s[2] == s[3] && s[4] == s[5]){
        cout << "Yes";
    } else {
            cout << "No";
    }
    return 0;
}
