/*B - Popular Vote
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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int votes = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        votes += a[i];
    }
    double limitVotes = (double)votes / (double)(4 * m);
    int cntM = m;
    for(int i = 0; i < n; i++){
        if(cntM == 0)
            break;
        if(a[i] >= limitVotes)
            cntM--;
    }
    if(cntM == 0){
        Yes
    } else {
        No
    }
    return 0;
}
