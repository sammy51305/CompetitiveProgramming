#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int t;
long long a, b, c, d, x, y, x1, y1, x2, y2;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        int finalX = x - a + b;
        int finalY = y - c + d;
        bool flag = false;
        if(x2 - x1==0){
            if(a != 0 || b != 0){
                flag = true;
            }
        }
        if(y2 - y1 == 0){
            if(c != 0 || d !=0){
                flag = true;
            }
        }
        if(x1 > finalX || finalX > x2){
            flag = true;
        }
        if(y1 > finalY || finalY > y2){
            flag = true;
        }
        if(flag){
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
