/*1294B - Collecting Packages
* 解題思維：
* 利用pair把座標進行排序，
* 因為要字典遞增，所以無論是x座標或是y座標都會遞增上去，所以只要違反即錯誤
* 輸出RU時，利用當下每個點與上一個點的差距去輸出
*/
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define F first
#define S second
#define MP make_pair
#define ll long long
#define ar array

#define maxn 200005
#define modn 1000000007

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, f, s;
        vector<pair<int,int>> coor;
        cin >> n;
        for(int i = 0; i < n; i++){
            //cin >> coor[i].F >> coor[i].S;
            cin >> f >> s;
            coor.push_back(MP(f,s));
            //cout << coor[i].F << coor[i].S;A
        }
        sort(coor.begin(), coor.end());

        bool flag = false;
        for(int i = 1; i < n;i++){
            if(coor[i].F < coor[i-1].F || coor[i].S < coor[i-1].S){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        int x = 0, y = 0;
        for(int i = 0; i < n; i++){
            //cout << "1st:" << coor[i].F << ", 2nd:" << coor[i].S;
            int dx = coor[i].F - x;
            int dy = coor[i].S - y;
            while(dx--) cout << "R";
            while(dy--) cout << "U";
            x = coor[i].F;
            y = coor[i].S;
        }
        cout << endl;
    }
    return 0;
}
