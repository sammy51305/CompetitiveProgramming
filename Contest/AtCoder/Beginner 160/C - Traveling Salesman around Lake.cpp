#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
ll n, k;
vector<ll> dis;
ll sum = 0;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> k >> n;
    dis.resize(n);
    ll lst, now;
    cin >> lst;
    int one = lst;
    bool flag = false;
    if(lst == 0){
        flag = true;
    }
    for(int i = 1; i < n; i++){
        cin >> now;
        dis[i-1] = now - lst;
        lst = now;
    }
    if(flag){
        dis[n-1] = k - now;
    } else {
        dis[n-1] = k - now + one;
    }
    sort(dis.begin(),dis.end());
    /*for(auto e:dis){
        cout << e << " ";
    }
    cout << endl;*/
    for(int i = 0; i <= n - 2; i++){
        sum += dis[i];
    }
    cout << sum;
    return 0;
}
