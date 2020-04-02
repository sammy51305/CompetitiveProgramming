#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k, n;
    cin >> k;
    while(k--){
        string s,t;
        vector<int> v;
        cin >> n >> s >> t;
        for(int i =0; i < n; i++){
            if(s[i] != t[i]){
                v.push_back(i);
            }
        }
        if(v.size() != 2){
            cout << "No" << endl;
        } else {
            swap(s[v[0]],t[v[1]]);
            if(s == t) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}
