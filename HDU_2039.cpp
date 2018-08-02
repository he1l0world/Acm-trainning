#include<iostream>
int main ()
{
  using namespace std;
  int m ;
  double a ,b, c;
  while(cin >> m)
  {
    for (int i = 0 ; i < m ; ++i)
    {
        cin >> a >> b >> c;
        if(a+b > c && b+c > a && a+c > b)
        cout << "YES" <<endl;
        else
        cout << "NO" << endl;
    }
  }
  return 0;
}
