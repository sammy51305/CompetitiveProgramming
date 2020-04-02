#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x;
    cin >> x;
    int ans = 0;
        int th = 0;
        int temp = 0;
        th = (x / 500) * 1000;
        ans += th;
        x %= 500;
        if(x != 0){
            temp = x / 5;
            ans += temp * 5;
        }
        cout << ans;

    return 0;
}
