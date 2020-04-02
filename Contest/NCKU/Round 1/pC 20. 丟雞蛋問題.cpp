#include<bits/stdc++.h>
#include "lib0020.h"
#define endl '\n'
using namespace std;
long long height_limit(long long M){
    if(!is_broken(M)) return M;
    if(is_broken(2)) return 1;
    long long l = 1;
    long long r = M;
    long long m =0;
    while(l != r){
        m = (l+r)/2;
        if(is_broken(m)){
            r = m;
        } else {
            l = m + 1;
        }
    }
    return l-1;
}

