/*A. Dreamoon and Ranking Collection
* 訓練主題：
* 題意：
* 解題思維：
*
* Author:sam51305
*/
#include<bits/stdc++.h>
using namespace std;
#define dealIO ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define F first
#define S second
#define MP make_pair
#define ll long long
#define ar array

#define maxn 200005
#define modn 1000000007

#define Yes cout << "Yes" <<endl;
#define No cout << "No" << endl;
int main() {
    dealIO
    int cases;
    cin >> cases;
    while(cases--){
        int n, x;
        cin >> n >> x;
        set<int> s;
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            s.insert(temp);
        }
        for(auto e: s){
            //cout << "e:" << e << ", ";
            if(e <= x){
                x++;
                //cout << "x:" << x << endl;
            } else {
                if(x+1 == e)
                   x++;
                break;
            }
        }
        cout << x << endl;
    }
    return 0;
}
