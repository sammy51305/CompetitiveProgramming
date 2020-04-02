#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    string s,ts,tsl,tsr;
    cin>>s;
    int l=s.length();
    string sl="";
    string sr="";
    for(int i=0;i<l/2;i++)
        sl+=s[i];
    for(int i=l/2+1;i<l;i++)
        sr+=s[i];
    bool f =false;
    ts=s;
    tsl=sl;
    tsr=sr;
    reverse(s.begin(),s.end());
    reverse(sl.begin(),sl.end());
    reverse(sr.begin(),sr.end());
    if(s==ts){
        if(sl==tsl)
            if(sr==tsr)
                f=true;
    }
    if (f)
        cout<<"Yes";
    else
        cout<<"No";

}
