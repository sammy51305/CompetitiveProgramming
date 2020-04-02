











#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    set<string>s;
    int n;
    cin>>n;
    vector<string>last;
    while(n--){
        int op;
        string temp;
        cin>>op;
        if(op!=2)
            cin>>temp;

        if(op==1){
            s.insert(temp);
            last.push_back(temp);
        }
        if(op==2){
            if(last.size()!=0){
            s.erase(last[last.size()-1]);
            last.pop_back();
            }
        }
        if(op==3){
            if(s.count(temp))
                cout<<"Y";
            else
                cout<<"N";
        }

    }
