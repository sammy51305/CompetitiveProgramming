/*
* 訓練主題：
* 題意：
* 解題思維：
*
* Author:sam51305
*/
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define mp make_pair
#define ll long long
#define pii pair <int, int>
#define pll pair <ll, ll>
#define pb push_back
#define ary array

#define Yes cout << "Yes" <<endl;
#define No cout << "No" << endl;

const int N = 10010;
int main()
{
  int t;
  scanf("%d", &t );
  while( t-- )
  {
    int n;
    scanf("%d", &n );

    vector< int > v( n );

    for( int &x : v )
      scanf("%d", &x );


    set< int > lf, gl;
    int mx = -1;
    for( int i = 0; i < n; ++ i )
    {
      lf.insert( v[i] );
      mx = max( mx, v[i] );
      if( (int)lf.size() == i + 1 && mx == i + 1 )
        gl.insert( i + 1 );
    }

    set< int > rf, gr;
    mx = -1;
    for( int i = n - 1; i >= 0; -- i )
    {
      rf.insert( v[i] );
      mx = max( mx, v[i] );
      if( (int)rf.size() == n - i && mx == n - i )
        gr.insert( n - i );
    }

    vector< pii > ans;
    for( int l1 : gl )
      if( gr.count( n - l1 ) )
        ans.push_back( { l1, n - l1 } );

    printf("%d\n", (int) ans.size() );

    for( auto it : ans )
      printf("%d %d\n", it.first, it.second );
  }
  return 0;
}
