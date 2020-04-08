/*��ҡG
* �q���ӱ誺dp(i)=dp(i-1)+dp(i-2)�t�ܦӨ�
* �ѩ�n�O���ثe�B��
* �]���Adp(i,k)=�q0��i�����W�Lk�B����k��
* �A�ӡAdp(i,k) = dp(i-1,k-1) + dp(i-2,k-1)
* ��]�G���@�Ҥldp(3,2)��q0��3�����W�L2�B����k��
* ���[�|�{���Odp(2,1)+dp(1,1)�A�z�ѬO�J�M�A�n��3���S�n���W�L��B
* ����b�Ҽ{�n���1�B��F��1���β�2�����ɭԡA�p���@�ӦA���W�h���@�B��ĤT���~���|�W�L��B
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
