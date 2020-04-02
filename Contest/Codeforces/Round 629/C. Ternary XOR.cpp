#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, n;
    string x;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> x;
        string a = "", b = "";
        bool firstOneFlag = false;
        for(int i = 0; i < n; i++){
            if(x[i] == '2' && !firstOneFlag){
                a += '1';
                b += '1';
            } else if(x[i] == '2' && firstOneFlag){
                a += '0';
                b += '2';
            } else if(x[i] == '0'){
                a += '0';
                b += '0';
            } else if(x[i] == '1' && !firstOneFlag){
                a += '1';
                b += '0';
                firstOneFlag = true;
            } else if(x[i] == '1' && firstOneFlag){
                a += '0';
                b += '1';
            }
        }
        cout << a << endl << b << endl;

    }
}
