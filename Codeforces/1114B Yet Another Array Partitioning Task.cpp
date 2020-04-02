#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int const maxn = 2e5 + 10;
bool cmp(const int &a, const int &b){
    return a > b;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, k, a[maxn];
    cin >> n >> m >> k;
    //vector<map<int,int>> idx;
    vector<int> idx(n);
    for(int i = 0; i < n; i++){
        int temp;
        cin >> a[i];
        idx[i] = i;
    }
    long long sum = 0;
    sort(idx.begin(), idx.end(),[&](int x, int y){return a[x] > a[y];});//greater<int>());
    for(auto e : idx){
        cout << e << " ";
    }
    cout << endl;
    for(int i = 0; i < m * k; i ++){
        sum += a[idx[i]];
    }
    cout << sum << endl;
    return 0;
}
