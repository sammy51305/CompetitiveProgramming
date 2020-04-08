 /*1157A Reachable Numbers
* �V�m�D�D�GSet
* �D�N�G
* ���D����G
*����ϥΨ��f�A���H1��10�e�̦h�u�|�[9��1�A��O���Ʀrn�̦h�u�|�ϥ�O(log n)��f�A�b�o�L�{���Y�J��w�g���L���Ʀr�A��ܤ��|�A�X�{�������L���Ʀr�F
* Author:sam51305
*/
#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define mp make_pair
#define ll long long
#define pii pair <int, int>
#define pll pair <ll, ll>
#define pb push_back
#define ary array

int main() {
    fastIO
    set<int> s;
    int n;
    cin >> n;
    while(!s.count(n)){
        s.insert(n);
        n++;
        while(n % 10 == 0) n /= 10;
    }
    cout << s.size() << endl;
    return 0;
}
