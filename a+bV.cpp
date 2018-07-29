#include<iostream>
int main ()
{
  using namespace std;
  int n , m;
  cin >> n ;
  while(n--)
  {
    cin >> m;
    int a , sum = 0;
    for(int i = 0 ; i < m ; i++)
    {
      cin >> a;
      sum += a;
    }
    cout << sum << endl;
  }
  return 0;
}
