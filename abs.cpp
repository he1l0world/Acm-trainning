#include<iostream>
#include<iomanip>
#include<cmath>
int main ()
{
  using namespace std;
  double a;
  while(cin >> a)
    cout << fixed << setprecision(2)<<abs(a) <<endl;
  return 0;
}
