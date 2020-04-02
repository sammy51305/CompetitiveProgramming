#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
vector<int> students;

//用字串分割的概念處理
int sol1(string s){
    int res = 0, distance = 0, apos = 0;
    s = s + "A";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A') {
            apos = i;
            break;
        }
    }
    for(int i = apos; i < s.size(); i++){
        if(s[i] == 'A'){
            distance = i - apos - 1;
            if(distance > res){
                res = distance;
            }
            apos = i;
        }
    }
    return res;
}

//用vector的概念處理
int sol2(string s){
    int res = 0;

    return res;
}

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
    int t,k;
    string s;

    cin >> t;
    while(t--){
        cin >> k;
        cin >> s;
        cout << sol1(s) << endl;
    }
    return 0;
}
