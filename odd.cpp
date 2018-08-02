#include<iostream>
int main ()
{
  using namespace std;
  int n ,a;
  while(cin >> n)
  {
    int sum = 1;
    for(int i = 0 ; i < n ; ++i)
    {
      cin >> a ;
      if((a&1) != 0)
        sum *= a;
    }
    cout << sum << endl;
  }
  return 0;
}
