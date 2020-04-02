#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, M, T,X;
    list<int> li;
    while(cin >> N){
        for(int i = 1; i <= N; i++)
           li.push_back(i);
        /*for(list<int>::iterator i = li.begin(); i != li.end(); i++){
            cout << *i << " ";
        }
        cout << endl;*/
        cin >> M;
        while(M--){
            cin >> T >> X;
            //*iter是準備取值，advance是對iter的index進行操作
            if(T == 0){
                auto it =find(li.begin(),li.end(), X);
                li.erase(it);
            } else if(T == 1){
                auto it =find(li.begin(),li.end(), X), itp = it;
                itp--;
                if(it != li.begin()){
                    li.erase(it);
                    li.insert(itp, X);
                }
            }
        }
        for(auto element : li)
            cout << element << " ";
        cout << endl;
    }
    return 0;
}
