#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
ll A, B, C, X, Y, ans;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> X >> Y >> A >> B >> C;
    vector<int> p(A), q(B), r(C);
    for(int i = 0; i < A; i++)
        cin >> p[i];
    for(int i = 0; i < B; i++)
        cin >> q[i];
    for(int i = 0; i < C; i++)
        cin >> r[i];
    sort(p.begin(),p.end(),greater<ll>());
    sort(q.begin(),q.end(),greater<ll>());
    sort(r.begin(),r.end(),greater<ll>());
    vector<int> v;
    for(int i = 0; i < X; i++)v.push_back(p[i]);
    for(int i = 0; i < Y; i++)v.push_back(q[i]);
    for(int i = 0; i < C; i++)v.push_back(r[i]);
    sort(v.begin(),v.end(),greater<ll>());
    for(int i = 0; i < X + Y; i++) ans += v[i];
    cout << ans;
    return 0;
}
