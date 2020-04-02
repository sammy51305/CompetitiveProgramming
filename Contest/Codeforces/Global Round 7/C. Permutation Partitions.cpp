#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    long long k;
    long long data;
    vector<pair<long long,long long>> v;
    cin >> n >> k;
    for(long long i = 1; i <= n; i++){
        cin >> data;
        v.push_back(make_pair(data, i));//v.push_back({data,i});
    }
    sort(v.begin(), v.end());//·Ófirst±Æ
    long long sum = 0;
    vector<long long> part;
    for(long long i = 0; i < k; i++){
        sum += v[v.size() - 1 - i].first;
        part.push_back(v[v.size()- 1 - i].second);
    }
    sort(part.begin(), part.end());
    long long numofpart = 1;
    for(long long i = 1; i < part.size(); i++)
    {
        numofpart *= (part[i] - part[i-1]);
        numofpart %= 998244353;
    }
    cout << sum << " " << numofpart << endl;
    return 0;
}
