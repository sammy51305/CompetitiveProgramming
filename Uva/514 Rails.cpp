/*Uva 514 Rails
* 訓練主題：stack
* 題意：
* 解題思維：
*
* Author:sam51305
*/
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    while(cin >> N && N){
        int temp;
        //cout << "test2_start:" << N << endl;
        while(true){
            cin >> temp;
            if(temp == 0){
                cout << endl;
                break;
            }
            stack<int> s;
            queue<int> q;
            q.push(temp);
            for(int i = 1; i < N; i++){
                cin >> temp;
                q.push(temp);
                //cout << "i:" << i << ", q.size:" << q.size() << endl;
            }
            for(int i = 1; i <= N; i++){
                s.push(i);
                //cout << "i:" << i << ", s.size:" << s.size() << endl;
                //cout << "before pop, q.front:" << q.front() << endl;
                //cout << "before pop, s.top:" << s.top() << endl;
                while(s.size() && q.front() == s.top()){
                    q.pop();
                    s.pop();
                    //cout << "after pop, q.front:" << q.front() << endl;
                    //cout << "after pop, s.top:" << s.top() << endl;
                }
            }
            if(s.size()){
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
            }
            //cout << "test" << endl;
        }
        //cout << "test2_end" << endl;
    }
    return 0;
}
