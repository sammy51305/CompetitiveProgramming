/*10935 Throwing cards away I
* �D�N�G���w���n�A�N1~n push�iqueue�A����i���Ӿާ@
* 1st�Gpop���F2nd�G�N�{�b��front push�iqueue�A�H�������A����queue�Ѥ@�Ӥ���
* ���D����G²�檺�ާ@�A��output�榡���`�N�A�ܮe��PE
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
        //cout << "Discarded cards: ";//����g�o�ӡA�_�h�|Presentation error�A�]��n���i�ର1
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
