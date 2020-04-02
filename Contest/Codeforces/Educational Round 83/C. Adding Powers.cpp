#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    while(N--){
        int n, k;
        cin >>n>>k;
        long long num[1001];
        vector<long long> power;
        for(int i = 0; i < n ; i++){
            cin >> num[i];
        }
        sort(num, num+n, greater<int>());
        //cout << num[0] << endl;
        long long res = 1;
        int i = 1;
        power.push_back(1);
        while(true){
            res *= k;
            if(res <= num[0]){
                power.push_back(res);
            } else {
                break;
            }
        }
        cout << endl;
        for(int i =0; i < power.size(); i++){
            cout << "powerset:" <<power[i] << " ";
        }
        int cnt = 0;
        for(int j = 0; j < n ; j++){
            //cout << "num[j]:" << num[j] << endl;
            if(num[j] == 0) break;
            for(int i = power.size()-1; i >= 0; i--){
                //cout << "vect_size[" << i << "]:" << power.size() << endl;
                if(num[j] >= power[i]){
                    num[j] -= power[i];
                    //cout << "want to delete:" << power[i] << endl;
                    power.pop_back();
                }
            }
            cnt += num[j];
        }

        cout << "power.size:" << power.size() << endl;

        if(cnt == 0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
