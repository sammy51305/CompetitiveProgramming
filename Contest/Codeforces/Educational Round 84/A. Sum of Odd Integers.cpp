#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(n % 2 == k % 2 && k <= sqrt(n)) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
