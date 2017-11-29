/*************************************************************************
	> File Name: sort.cpp
	> Author: Dawson chen
	> Mail: helloworld19970916@gmail.com
	> Created Time: 2017年11月29日 星期三 21时35分54秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{
    int n , m;
    cin >> n ;
    vector <int > a;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> m;
        a.push_back( m);
    }
    sort(a.begin(),a.end());
    for(auto i:a)
        cout << i << " ";
    cout << endl;
    return 0;
}
