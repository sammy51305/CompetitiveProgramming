#include<bits/stdc++.h>
#define endl '\n'
#define F first //position
#define S second //value(element)
#define MP make_pair
using namespace std;
deque<pair<int,int>> deq;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k, h;
    cin >> n >> k;
    //init
    for(int i = 0; i < k - 1; i++){
        cin >> h;
        while(!deq.empty() && deq.back().S < h)
            deq.pop_back();
        deq.push_back(MP(i,h));
    }
    //³Ñ¾l
    for(int i = k - 1; i < n; i++){
        cin >> h;
        while(!deq.empty() && deq.back().S < h)
            deq.pop_back();
        deq.push_back(MP(i,h));
        while(!deq.empty() && deq.front().F <= i - k)
            deq.pop_front();
        cout << deq.front().S << " ";
    }
    cout << endl;
    return 0;
}
