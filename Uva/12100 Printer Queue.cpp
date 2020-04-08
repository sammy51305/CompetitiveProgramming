/*UVA 12100 Printer Queue
* �V�m�D�D�Gqueue
* �D�N�G���wn���u���ŦC�L�ǦC�A�M��q0�s����n-1�C�X���@�Ӥ����A�p�G�L�O���C���u���ų̰����A���L�]�Ӯɤ@�����^�A�_�h��춤���]���Ӯɡ^�C���w�@��m�A�D��mm����󥴦L���ɶ��C
* ���D����G
* �Q��priority maintain�v���̤j���ȡA�g�L�C�@��run����npop���A�p���@�ӥi�O�ҷ�U���C�����O�̤j�ȯ���
* �ѤU���N�O��queue�i��ާ@
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
        //for(int i = 0; i < n; i++)//�����ӥ�for-loop�A�]��queue�����O�S����m���������A�O�⥦�Q��array or vector
        while(true){
            int highestPriority = pq.top();
            pq.pop();
            //������v���̤j�������A�åB��b�����e�����������Ӷ��ǥ�b���᭱
            while(q.front().F != highestPriority){
                pair<int, int> qf = q.front();
                q.pop();
                q.push(qf);
            }

            //���Ӥ���
            if(q.front().S == m){
                cnt++;
                break;
            //���O��e�v���̤j
            } else {
                q.pop();
                cnt++;
            }
        }
        cout << cnt<< endl;

    }
    return 0;
}
