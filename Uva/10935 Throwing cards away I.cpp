/*10935 Throwing cards away I
* 題意：給定整數n，將1~n push進queue，之後進行兩個操作
* 1st：pop掉；2nd：將現在的front push進queue，以此類推，直到queue剩一個元素
* 解題思維：簡單的操作，但output格式須注意，很容易PE
*/
#include<bits/stdc++.h>
using namespace std;
#define dealIO ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define F first
#define S second
#define MP make_pair
#define ll long long
#define ar array

#define maxn 200005
#define modn 1000000007

int main() {
    dealIO
    int n;
    /*while(true){
        cin >> n;
        if(n == 0) break;*/
    while(cin >> n && n){
        queue<int> cards;
        for(int i = 1 ; i <= n; i ++)
            cards.push(i);
        //cout << "Discarded cards: ";//不能寫這個，否則會Presentation error，因為n有可能為1
        cout << "Discarded cards:";
        /*while(!q.empty()){
            if(q.size() == 1){
                remain = q.front();
                break;
            }*/
        bool first = true;
        while(cards.size() > 1){//or cards.size() != 1
            if(first){
                cout << " " << cards.front();
                first = false;
            } else {
                cout << ", " << cards.front();
            }
            cards.pop();
            int remainCard = cards.front();
            cards.pop();
            cards.push(remainCard);
        }
        cout << endl;
        cout << "Remaining card: " << cards.front() << endl;
    }
    return 0;
}
