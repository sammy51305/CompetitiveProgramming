#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int m=*max_element(a.begin(),a.begin()+k);
    cout<<m<<" ";
    int cnt=0;
    vector<int>b;
    b.assign(a.begin(),a.end());
    sort(b.begin(),b.end(),[](int x,int y){return x>y;});
    bool f=false;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
            f=true;
    }
    if(f){
    for(int i=k;i<n;i++){
        if(a[cnt]!=m){
            m=max(m,a[i]);
            cout<<m<< " ";
        }
        else{
            //cout<<"cnt:"<<cnt<<cnt+k<<endl;
            m=0;
            //cout<<"count:"<<m<<endl;
            for(int j=cnt+1;j<cnt+1+k;j++)
                m=max(m,a[j]);
            cout<<m<< " ";
        }
        cnt++;
    }
    }
    else{
        for(int i=1;i<n-k+1;i++)
            cout<<a[i]<<" ";
    }
    return 0;
}
