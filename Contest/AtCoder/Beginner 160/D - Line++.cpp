#include<bits/stdc++.h>
#define MAX 2001
using namespace std;
int ans[MAX] = {};
int N,X,Y,ans;
int main (){
    cin >> N >> X >> Y;
    for(int i = 1; i <= N; i++)	{
        for(int j = i + 1; j <= N; j++){
            int k = min(min(abs(j-i), abs(X-i) + 1 + abs(j-Y)), abs(Y-i) + 1 + abs(j-X));
            ans[k]++;
        }
    }
    for(int i=1;i<N;i++) {
        cout << ans[i] << "\n";
    }
    return 0;
}
