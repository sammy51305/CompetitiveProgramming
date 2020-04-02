/*C - Replacing Integer
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
    ll n, k;
    cin >> n >> k;
    ll modn = n % k;
    ll dif = abs(modn - k);
    if(dif < modn){
        cout << dif;
    } else {
        cout << modn;
    }
    return 0;
}
