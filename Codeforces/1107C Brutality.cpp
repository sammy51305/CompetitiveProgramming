/*1107C Brutality
* �D�N�G���wn�ӭ^��p�g�r���H�ι�����n���v�ȡA�n�D�b����s����Y�ӭ^��p�g�r���W�Lk���A�ݱo��̤j���v�ȬO�h��
* ����s�򪺦r�ź�X���סA�ݬO�_�s��W�LK�A�Y����<k�A�h��������v�ȳ��[�W�h
* �Y����>k�A�h�q�s�򪺦r�Ÿ̭��D�X�ek�ӳ̤j���v�ȥ[�`
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
    for(int i = 1; i <= n; i++){//�J�줣�P���r�Ť~���U�ӡA��e�@�Ӧr�Ť���A�`�N�G�O�qi=1���n�A�ҥHi== n||s[i]!=s[i-1]����m�ܭ��n�A�\���N�|out of bound
        //cout << "i:" << i << endl;
        if(i == n || s[i] != s[i-1]){//i == n�O�]����̫�@�Ӧr�ťB��e���@�Ӧr�@�ˮɡA���ӭn�i���v�ȥ[�`
            //���ˬd�e�����Ӧr���s�򦸼ƬO�_���W�LK
            if(i - start > k){//i-start�����k�}�A�p��s��r�Ū�����ex.baaaac�Ai=5��start=0�A�|�p��Xa�����׬�4
                //sort(a.begin() + start, a.begin() + i);
                sort(a.begin() + start, a.begin() + i, greater<int>());
            }
            for(int j = start; j < start + k && j < i; j++){
                //cout << "a[" << j << "]:" << a[j] << " ";
                ans += a[j];
            }
            //cout << endl;
            /*for(int j = 0; j < k && i-1-j >= start; j++){//i-1-j�G��U��ith�檺�e�@�ӡA�n���e��j�Bex.5 7 16 18(�w�ƧǹL)���O��������m�Oi=1 2 3 4�A���{�bi=5
                ans += a[i-1-j];
            }*/
            start = i;//��s���s�򪺰_�l��m
        }
    }
    cout << ans << endl;
    return 0;
}
