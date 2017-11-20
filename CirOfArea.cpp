/*************************************************************************
	> File Name: CirOfArea.cpp
	> Author: Dawson chen
	> Mail: helloworld19970916@gmail.com
	> Created Time: 2017年11月20日 星期一 21时57分36秒
 ************************************************************************/

#include<iostream>
#include<iomanip>
#define PI 3.14159265358979323
using namespace std;
int main ()
{
    double t;
    cin >> t;
    cout << setiosflags(ios::fixed) << setprecision(7) << t*t*PI;
    return 0;
}
