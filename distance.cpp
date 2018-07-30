#include<iostream>
#include<cmath>
#include<iomanip>
int main ()
{
  using namespace std;
  double x1,x2,y1,y2;
  while(cin >> x1 >> y1 >> x2 >> y2)
    cout << setiosflags(ios::fixed) << setprecision(2)<<sqrt(pow(x2-x1,2)+pow(y2-y1,2))<< endl;
  return 0;
}
