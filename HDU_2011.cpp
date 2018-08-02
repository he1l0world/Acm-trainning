#include<iostream>
#include<iomanip>
int main ()
{
  using namespace std;
  int n , m;
  while(cin >> n)
  {
    for(int i = 0 ; i < n ; ++i)
    {
      cin >> m;
      double sum  = 0;
      for(int i = 0 ; i < m ; ++i)
      {
        int j = i+1;
        if(j&1 )
          sum += 1/double(j);
        else
          sum -=1/double(j);
      }
      cout << fixed << setprecision(2) <<sum << endl;
    }
  }
  return 0;
}
