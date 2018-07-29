#include<iostream>
int main ()
{
  using namespace std;
  int n;
  while(cin >> n && n!= 0)
  {
    int sum = 0 , a;
    for(int i =0 ; i < n ; i++ )
    {
      cin >>  a;
      sum+=a;
    }
    cout << sum << endl;

  }
    return 0;
}

