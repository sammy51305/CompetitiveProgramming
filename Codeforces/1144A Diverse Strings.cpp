#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int temp;
        for(int i = 0; i < s.size()-1; i++){
            temp = s[i] - 'a';
            if(temp + 1 == s[i+1] - 'a'){
                cnt +=0;
            } else {
                cout << "No";
                break;
            }
        }
        if(cnt ==0){
            cout << "Yes";
        }
    }
    return 0;
}
