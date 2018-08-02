#include<iostream>
#include<cmath>
#include<iomanip>
int main ()
{
  using namespace std;
  double n , m;
  while(cin >> n >> m)
  {
    double sum = 0;
    for(int i = 0 ; i < m ; ++i)
    {
      sum += n;
      n = sqrt(n);
    }
    cout << fixed << setprecision(2) << sum << endl;
  }
  return 0;
}
