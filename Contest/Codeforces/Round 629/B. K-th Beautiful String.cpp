#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        string ans = "";
        int sum = 1, group = 1;
        while(sum < k){
            group++;
            sum += group;
        }
        int firstBpos = n - 1 - group;
        int pos = sum - group + 1;
        int secondBpos = (n - 1) - (k - pos);
        for(int i = 0; i < n; i++){
            if(i == firstBpos || i == secondBpos)
                ans += 'b';
            else
                ans += 'a';
        }
        cout << ans << endl;
    }
    return 0;
}
