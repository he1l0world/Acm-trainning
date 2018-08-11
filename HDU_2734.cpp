#include<iostream>
#include<string>
int main ()
{
  using namespace std;
  string a;
  while(getline(cin, a) && a != "#") 
  {
    int sum = 0 , j = 1;
    for(int i = 0 ; i < a.length(); ++i)
    {
      if(a.at(i) == ' ')
        j = 0;
      else
        j = a.at(i) - 'A' + 1;
      //cout << j << endl;
      sum += (i+1)*j;
    }
    cout << sum <<endl;
  }
  return 0;
}
