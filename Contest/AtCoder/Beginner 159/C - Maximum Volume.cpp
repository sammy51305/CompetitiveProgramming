#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    double L;
    cin >> L;
    double side = L/3;
    double volume = side * side * side;
    cout << fixed <<  setprecision(12) << volume << endl;
    //printf("%12f", volume);
}
