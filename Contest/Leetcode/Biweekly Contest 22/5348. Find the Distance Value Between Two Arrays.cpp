#include <iostream>

#include <vector>

using namespace std;
int main()
{
    vector<vector<int> > yoyo2;            //���O�@�ӤG�����}�C,���W��yoyo2

    for(int i=0;i<5;i++)
    {
        vector<int>yoyo1;                  //���O�@��,���Wyoyo1,�򥻪��G���榡,�ƥ���@���]�w�n

        for(int j = 0;j<9;j++)
        {
            yoyo1.push_back(i);            //�ڬO���@�Ӫ�9�e5,�ҥH�Ĥ@�C�N�|�\9��0
        }
        yoyo2.push_back(yoyo1);           //�ⰵ�n��9��0��b�Ĥ@�C,����^��i=1,�}�s�@�����@�˪���,
    }                                     //����i=4����
    for(int i=0;i<yoyo2.size();i++)       //����o�ǬO��G���̪��F��L�X��
    {
        for(int j=0;j<yoyo2[i].size();j++)
        {
            cout<<"(i,j):(" <<i<<","<<j<<")"<<yoyo2[i][j];
        }
        cout << endl;
    }
}
