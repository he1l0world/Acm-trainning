#include<iostream>
#include<string>
#include<algorithm>
int main ()
{
  using namespace std;
  string a;
  int t;
  while(cin >> a)
  {
    t = 0;
    sort(a.begin(),a.end());
    for(string::const_iterator iter = a.begin() ; iter != a.end();t++ , iter++)
    {
      cout << *iter ;
      if(t != a.length() - 1)
        cout << " ";
    }
    cout << endl;
  }
  return 0;
}
