#include<iostream>
int main ()
{
  using namespace std;
  int n ,a;
  while(cin >> n)
  {
    int sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
      cin >> a;
      sum += a;
    }
    cout << sum << endl;
  }
  return 0;
}

