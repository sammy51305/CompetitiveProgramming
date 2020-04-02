#include <iostream>

#include <vector>

using namespace std;
int main()
{
    vector<vector<int> > yoyo2;            //它是一個二維的陣列,取名為yoyo2

    for(int i=0;i<5;i++)
    {
        vector<int>yoyo1;                  //它是一維,取名yoyo1,基本的二維格式,事先把一維設定好

        for(int j = 0;j<9;j++)
        {
            yoyo1.push_back(i);            //我是做一個長9寬5,所以第一列就會擺9個0
        }
        yoyo2.push_back(yoyo1);           //把做好的9個0放在第一列,之後回到i=1,開新一維做一樣的事,
    }                                     //做到i=4為止
    for(int i=0;i<yoyo2.size();i++)       //之後這些是把二維裡的東西印出來
    {
        for(int j=0;j<yoyo2[i].size();j++)
        {
            cout<<"(i,j):(" <<i<<","<<j<<")"<<yoyo2[i][j];
        }
        cout << endl;
    }
}
