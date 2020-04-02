 /*1157A Reachable Numbers
* 癡絤肈Set
* 肈種
* 秆肈蝴
*尿ㄏノㄧ计f埃1Ω10玡程穦9Ω1琌癸计n程穦ㄏノO(log n)Ωf硂筁祘い璝笿竒ǎ筁计ボぃ穦瞷ぃ纯ǎ筁计
* Author:sam51305
*/
#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define mp make_pair
#define ll long long
#define pii pair <int, int>
#define pll pair <ll, ll>
#define pb push_back
#define ary array

int main() {
    fastIO
    set<int> s;
    int n;
    cin >> n;
    while(!s.count(n)){
        s.insert(n);
        n++;
        while(n % 10 == 0) n /= 10;
    }
    cout << s.size() << endl;
    return 0;
}
