#include<iostream>
int main ()
{
  using namespace std;
  int n;
  cin >> n ;
  while(n--)
  {
    int m , a , sum = 0;
    cin >> m;
    for(int i = 0 ; i < m ; i++)
    {
      cin >> a;
      sum += a;
    }
    cout << sum << endl;
    if (n != 0)
      cout  << endl;
  }
  return 0;
}
