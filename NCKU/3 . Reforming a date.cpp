#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    date d = from_us_string(s);
    cout << d;
    return 0;
}
