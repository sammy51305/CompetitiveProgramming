#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(b > a) cout << b-a << endl;
        else {
            if(a % b ==0) cout << 0 << endl;
            else cout << (a / b + 1) * b - a << endl;
        }
    }
    return 0;
}
