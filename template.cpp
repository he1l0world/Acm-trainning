/*************************************************************************
	> File Name: template.cpp
	> Author: Dawson chen
	> Mail: helloworld19970916@gmail.com
	> Created Time: 2017年12月06日 星期三 20时48分31秒
 ************************************************************************/

#include<iostream>
using namespace std;
template <typename Anytype>
void Swap(Anytype &a , Anytype &b)
{
    Anytype temp;
    temp = a;
    a = b;
    b = temp;
}

int main ()
{
    int a , b;
    cin >> a;
    cin >> b;
    cout<<a<<" "<<b<<endl;
    Swap(a,b);
    cout<<a<<" "<<b<<endl;
}
