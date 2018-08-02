#include<iostream>
int main()
{
  using namespace std;
  int n ;
  double m;
  while(cin >> n && n != 0)
  {
    int a = 0 , b = 0,  c = 0;
    for (int i = 0; i < n ; ++i)
    {
      cin >> m;
      if(m > 0)
        a++;
      if(m == 0)
        b++;
      if(m < 0)
        c++;
    }
    cout << c << " " << b << " " << a <<endl;
  }
  return 0;
}
