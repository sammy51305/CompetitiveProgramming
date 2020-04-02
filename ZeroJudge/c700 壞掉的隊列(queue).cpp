/*c700 壞掉的隊列(queue)
* 訓練主題：queue
* 題意：用兩個stack實作queue，注意題目敘述，它給定6個方法，問方法要怎麼依序挑選，才能讓兩個stack實作queue是正確的
* 解題思維：
* 這題可以不實作，直接想清楚步驟利用count計算stack中元素的數量，比一比後再output就好，也可以直接實作一次當練習
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

int main() {
    dealIO
    stack<ll> s1;
    stack<ll> s2;
    string s;
    while(cin >> s && !s.empty()){
        if(s == "push"){
            ll n;
            cin >> n;
            s1.push(n);
            cout << 1;
        } else {
            if(s2.empty()){
                while(!s1.empty()){
                    int temp = s1.top();
                    s1.pop();
                    s2.push(temp);
                    cout << 5;
                }
                int temp = s2.top();
                s2.pop();
                cout << 4;
            } else {
                int temp = s2.top();
                s2.pop();
                cout << 4;
            }
        }
    }
    return 0;
}
