#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, op;
    string s;
    cin >> n;
    set<string> st;
    stack<string> dict;
    while(n--){
        cin >> op;
        if(op != 2)
            cin >> s;
        switch(op){
        case 1:
            st.insert(s);
            dict.push(s);
            break;
        case 2:
            if(dict.size()){
                string top = dict.top();
                dict.pop();
                st.erase(top);
            }
            break;
        case 3:
            if(st.count(s)) cout << "Y";
            else cout << "N";
            break;
        default:
            break;
        }
    }
    return 0;
}
