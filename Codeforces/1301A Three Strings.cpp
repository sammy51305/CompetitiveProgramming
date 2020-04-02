#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        string a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;
        int cnt = 0;
        for(int i = 0; i < a.size(); i++){
            if(!(a[i] == c[i] || b[i]==c[i]))
                cnt +=1;
        }
        if(cnt ==0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
