/*c700 �a�������C(queue)
* �V�m�D�D�Gqueue
* �D�N�G�Ψ��stack��@queue�A�`�N�D�رԭz�A�����w6�Ӥ�k�A�ݤ�k�n���̧ǬD��A�~�������stack��@queue�O���T��
* ���D����G
* �o�D�i�H����@�A�����Q�M���B�J�Q��count�p��stack���������ƶq�A��@���Aoutput�N�n�A�]�i�H������@�@����m��
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
