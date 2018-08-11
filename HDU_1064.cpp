#include<iostream>
#include<iomanip>
int main ()
{
  using namespace std;
  double sum = 0;
  double a;
  for(int i = 0 ; i < 12 ; ++i)
  {
    cin >> a;
    sum += a;
  }
  cout << fixed << setprecision(2) << "$" <<sum/12 <<endl;
  return 0;
}
