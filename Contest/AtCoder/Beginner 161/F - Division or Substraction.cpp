/*F - Division or Substraction
* Author:sam51305
*/
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define mp make_pair
#define ll long long
#define pii pair <int, int>
#define pll pair <ll, ll>
#define pb push_back
#define ary array

#define Yes cout << "Yes" <<endl;
#define No cout << "No" << endl;
int main() {
    fastio
    int n;
    cin >> n;
    if (n == 2){
        cout << 1 << endl;
        return 0;
    }
    int ans=0;
    for (int i = 2; i * i <= n && i < n; i++){
        int m = n;
        while (m % i == 0)
            m /= i;
        if (m % i == 1){
            ans++;
            cout << "i1:" << i << endl;
        }
        if ((n-1) % i == 0){
            ans--;
            cout << "n-1:" << n-1 << endl;
        }
    }
    n--;
    cout << "n1:" << n << endl;
    for (int i = 1; i * i <= n; i++){
        if (n % i == 0){
            ans++;
            cout << "i2:" << i << endl;
            if (n > i * i){
                ans++;
                cout << "n2:" << n << endl;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
