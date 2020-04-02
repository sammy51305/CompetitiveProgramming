/*思考：
* 從爬樓梯的dp(i)=dp(i-1)+dp(i-2)演變而來
* 由於要記錄目前步數
* 因此，dp(i,k)=從0到i階不超過k步的方法數
* 再來，dp(i,k) = dp(i-1,k-1) + dp(i-2,k-1)
* 原因：給一例子dp(3,2)表從0到3階不超過2步的方法數
* 直觀會認為是dp(2,1)+dp(1,1)，理由是既然你要到3階又要不超過兩步
* 那麼在考慮要能夠1步抵達第1階或第2階的時候，如此一來再往上多走一步到第三階才不會超過兩步
*/
#include<bits/stdc++.h>
#define endl '\n'
#define maxn 1001
#define MOD_N 1000000009
using namespace std;
int n, k , dp[maxn][maxn];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    dp[0][0]=dp[2][1]=1;
    for(int row = 1; row <= n; row++)
        dp[row][0] = 0;
    for(int col = 1; col <= k; col++){
        dp[0][col] = 1;
        dp[1][col] = 1;
    }
    for(int row = 2; row <= n; row++){
        for(int col = 2; col <= k; col++){
            dp[row][col] = (dp[row - 1][col - 1] + dp[row - 2][col - 1]) % MOD_N;
        }
    }
    cout << dp[n][k];
    return 0;
}
