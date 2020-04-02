#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> idx(n),trees(n);

    for(int i=0;i<n;i++){
        cin >> trees[i];
        idx[i]=i;
    }
    sort(idx.begin(),idx.end(), [&](int x, int y){return trees[x] > trees[y];});
    for(auto e : idx){
        cout << e << " ";
    }
    cout << endl;
    vector<int> ans;
    for(int i = 0; i<idx.size();i++){
        if(idx[i] == idx.size()-1 ){//§À

        } else if(idx[i] == 0){//ÀY

        } else if(){

        }
    }
    return 0;
}
