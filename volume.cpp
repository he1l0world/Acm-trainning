#define PI 3.1415927
#include<iostream>
#include<iomanip>
int main ()
{
  using namespace std;
  double r;
  while(cin >> r)
    cout <<fixed<<setprecision(3)<< 4/3.0*PI*r*r*r<<endl;
  return 0;
}
