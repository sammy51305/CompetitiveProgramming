#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    map<int,int> cntmap;
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        A[i] = temp;
        if(cntmap.count(temp)){
            cntmap[temp]++;
        } else {
            cntmap[temp] =1;
        }
    }
    map<int,int> res;
    for(auto e: cntmap){
        int cnt=0;
        if(!res.count(e.first)){
            int n = e.second - 1;
            cnt+= n*(n-1)/2;
        } else {
            int n = e.second ;
            cnt+= n*(n-1)/2;

        }
        res[e.first]=cnt;
    }
    for(int i = 0;i < N;i++){

    }
    return 0;
}
