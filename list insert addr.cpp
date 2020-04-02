#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    list<int> li;
    list<int>::iterator it = li.begin();
    list<int>::iterator ib = li.end();
    cout << "list.begin1:" << &(*it) << endl;
    cout << "list.end1:" << &(*ib) << endl;

    li.insert(it,2);
    it++;
    it++;
    it++;
    li.insert(it,3);

    li.insert(it,4);

    list<int>::iterator it1 = li.begin();
    list<int>::iterator ib1 = li.end();
    cout << "list.begin1:" << &(*it1) << endl;
    cout << "list.end1:" << &(*ib1) << endl;
    /*li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    li.push_back(5);
    li.push_back(6);*/
    for(list<int>::iterator iter = li.begin();iter != li.end(); iter++){
        cout << "(value,addr):(" << (*iter) << ", " << &(*iter) << ")";
    }
    return 0;
}
