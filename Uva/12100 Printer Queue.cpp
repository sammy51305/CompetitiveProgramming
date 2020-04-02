/*UVA 12100 Printer Queue
* 訓練主題：queue
* 題意：給定n個優先級列印序列，然後從0編號到n-1。出隊一個元素，如果他是隊列中優先級最高的，打印（耗時一分鐘），否則放到隊尾（不耗時）。給定一個m，求位置m的文件打印的時間。
* 解題思維：
* 利用priority maintain權重最大的值，經過每一個run之後要pop掉，如此一來可保證當下的每輪都是最大值能比對
* 剩下的就是對queue進行操作
* Author:sam51305
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
    int cases;
    cin >> cases;
    while(cases--){
        int n, m;
        cin >> n >> m;
        priority_queue<int> pq;
        queue<pair<int,int>> q;
        for(int i = 0;i < n; i++){
            int p;
            cin >> p;
            pq.push(p);
            q.push({p,i});
        }
        int cnt = 0;
        //for(int i = 0; i < n; i++)//不應該用for-loop，因為queue本身是沒有位置的概念的，別把它想成array or vector
        while(true){
            int highestPriority = pq.top();
            pq.pop();
            //先找到權重最大的元素，並且把在它之前的元素都按照順序丟在它後面
            while(q.front().F != highestPriority){
                pair<int, int> qf = q.front();
                q.pop();
                q.push(qf);
            }

            //找到該元素
            if(q.front().S == m){
                cnt++;
                break;
            //應是當前權重最大
            } else {
                q.pop();
                cnt++;
            }
        }
        cout << cnt<< endl;

    }
    return 0;
}
