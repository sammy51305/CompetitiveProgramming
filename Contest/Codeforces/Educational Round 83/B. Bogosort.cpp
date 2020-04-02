#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int num[101];
    while(N--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        sort(num, num+n, greater<int>());
        for(int i=0;i<n;i++){
            if (i!=n-1)
                cout<<num[i]<<" ";
            else
                cout<<num[i];
        }
        cout<<endl;

    }
}
