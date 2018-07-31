#include<iostream>
int main ()
{
  using namespace std;
  int t;
  while(cin >> t)
  {
    if(t > 100 || t < 0)
    {
      cout << "Score is error!" << endl;
      continue;
    }
    t/=10;
    switch (t)
    {
      case 10:
      case 9: cout << "A"<<endl; break;
      case 8: cout << "B"<<endl; break;
      case 7: cout << "C"<<endl; break;
      case 6: cout << "D"<<endl; break;
      default: cout << "E"<<endl; break;
    }
  }
  return 0;
}
