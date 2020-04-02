/*1294B - Collecting Packages
* ���D����G
* �Q��pair��y�жi��ƧǡA
* �]���n�r�廼�W�A�ҥH�L�׬Ox�y�ЩάOy�y�г��|���W�W�h�A�ҥH�u�n�H�ϧY���~
* ��XRU�ɡA�Q�η�U�C���I�P�W�@���I���t�Z�h��X
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
