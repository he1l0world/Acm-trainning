/*************************************************************************
	> File Name: fibonacci.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月19日 星期日 18时56分48秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
vector <int> a( 1000000);
int main ()
{
    a[0] = 0;a[1] = 1;a[2] = 1;
    int n;
    for(int i= 3 ; i <= 1000000 ; i++)
    {
        a[i] = (a[i-1]+a[i-2])%10007;
    }
    while(cin >> n )
    {
        cout << a[n]<<endl;
    }
}
