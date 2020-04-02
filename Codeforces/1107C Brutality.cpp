/*1107C Brutality
* 題意：給定n個英文小寫字母以及對應的n個權值，要求在不能連續按某個英文小寫字母超過k次，問得到最大的權值是多少
* 先把連續的字符算出長度，看是否連續超過K，若長度<k，則把對應的權值都加上去
* 若長度>k，則從連續的字符裡面挑出前k個最大的權值加總
*/
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define F first
#define S second
#define MP make_pair
#define ll long long
#define ar array

#define maxn 200005
#define modn 1000000007
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    string s;
    cin >> s;
    ll ans = 0;
    int start = 0;
    for(int i = 1; i <= n; i++){//遇到不同的字符才停下來，跟前一個字符比較，注意：是從i=1算到n，所以i== n||s[i]!=s[i-1]的位置很重要，擺錯就會out of bound
        //cout << "i:" << i << endl;
        if(i == n || s[i] != s[i-1]){//i == n是因為到最後一個字符且跟前面一個字一樣時，應該要進行權值加總
            //先檢查前面那個字的連續次數是否有超過K
            if(i - start > k){//i-start左閉右開，計算連續字符的長度ex.baaaac，i=5而start=0，會計算出a的長度為4
                //sort(a.begin() + start, a.begin() + i);
                sort(a.begin() + start, a.begin() + i, greater<int>());
            }
            for(int j = start; j < start + k && j < i; j++){
                //cout << "a[" << j << "]:" << a[j] << " ";
                ans += a[j];
            }
            //cout << endl;
            /*for(int j = 0; j < k && i-1-j >= start; j++){//i-1-j：當下的ith格的前一個，要往前走j步ex.5 7 16 18(已排序過)分別對應的位置是i=1 2 3 4，但現在i=5
                ans += a[i-1-j];
            }*/
            start = i;//更新不連續的起始位置
        }
    }
    cout << ans << endl;
    return 0;
}
