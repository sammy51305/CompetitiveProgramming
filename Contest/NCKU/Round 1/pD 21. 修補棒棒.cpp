/* �o�D�O�o�O�I����׭n���}�p��
n:�Q�}�a���˸`�ӼơA�Y�}���ƶq�λ��I���ƶq
m:�������˸`�ƶq�A�i�z�Ѭ����׬�m���˸`�A�C�@�q���׬�1�A�@m�`
k:�ܦh�ϥΪ����a�q�ơA�C�@�q�����צܤ�>=1
�A������Q�k�O�G
case 1. n <= k���ɭԡA�ѩ���׸ɪ��˸`�Ӽ�<=�׸ɽ��a���q�ơA�]��������Xk�q�Y�i(�C���I���׳�1)

case 2. n > k���ɭԡA���Q�X�ե��|����Ӭ}�ΥH�W�ϥΨ�P�@�q���a�״_=>�A��ҭn���b����k�q���a�B��n�p�����p�U�A����׸ɩҦ����}
(�H�U���Ocase 2)�����A��Q�n�׸�n�Ӭ}���ɭԡA�p�G����ݨC�Ӭ}���ܡA����̪��[���Q�k�N�O�ݭnn�q(���׬�1)�����a
�]���A�o�X�@�ӷ����G
1.�׸ɧ��������}�A�ܤֻݭn����n

�A�ӡA���@�ӯ��_���⦡�Gn-k�A�i�H���Q����n�Ӭ}�A����n�q���׬�1�����a�K�W�A���ѩ�u��k�q(n > k)�A�ҥH�|��n-k�Ӷ��j�����a�ݭn�X��
2.��X�ݭn�ϥΦP�@�q���a�ɪ��Ӽ�(n-k)
ex. n=5, k=3
1 2 4 60 87
 1 2 56 27
�H���ҨӬݡA�N�|��5�Ӭ}�A����5�q����1�����a�b�s��1 2 4 60 87�K�W�A����ثe�w�g�ϥ�5�q���a�F�A������n����ܦ��D�حn�D��3�q���a?
�H�}�P�}���������j�Ӭݪ��ܡA�`�@�|��4�q���j�ѿ�ܡA�C�X�֤@��(�}�P�})�N�|���쥻�����a�q�Ƥ֤@�AĴ�p�����]�X�ֽs��1 2����
������Ψ쪺���a�N�|�O 12(�H�@�_) 4 60 87�@4�q���a�A�A�H4��60�G12 460 87�N�|�ѤT�q���a
=>�@�H��ե|�Ӭ}�A�]�N�On-k�C
3.��X�����ϥΦP�@�q���a�s����Ӭ}���N���A�ƧǡA�q�̤p���N���}�l��ΡC
*/
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
ll n, m, k;
vector<ll> s;//spacing
ll ans = 0;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m >> k;
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
    s.resize(n-1);
    ll lst, now;
    cin >> lst;
    //�O���}�P�}�����j����
    for(int i = 1; i < n; i++){
        cin >> now;
        s[i-1] = now - lst;
        lst = now;
    }

    sort(s.begin(), s.end());
    ans += n;//1.���׸ɩҦ����}
    //2.��ܭn�X�֪����j�A��̤p
    for(int i = 0; i < n-k; i++){
        ans += s[i]-1;
    }
    cout << ans << endl;
    return 0;
}
