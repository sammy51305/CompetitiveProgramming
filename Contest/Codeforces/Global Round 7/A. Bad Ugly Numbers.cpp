#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string ans = "";
        if(n ==1) {
            cout << "-1" << endl;
            continue;
        }
        ans += '2';
        for(int i = 1; i < n; i++){
            ans += '3';
        }
        cout << ans << endl;
    }
    return 0;
}
