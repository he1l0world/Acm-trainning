#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void rev(int begin , int end , string& a)
{
  //cout << begin << " " << end << endl;
  for(int i = begin,j = end; i <= j ; ++i , --j)
     swap(a.at(i), a.at(j));
}
int main ()
{
  int n;
  string str;
  while(cin >> n)
  {
    cin.get();
    for(int i = 0 ; i < n ; ++i)
    {
      getline(cin , str);
      //cout << str;
      int begin = 0 , end = 0;
      for(int j = 0 ; j < str.length(); ++ j)
        if(str.at(j) == ' ' || j == str.length()-1)
        {
          //最后一个是一个空格
            end = j-1;
            if(j == str.length()-1 && str.at(j) != ' ')
              end = j;
            //cout << begin  << end <<endl;
            rev(begin , end , str);
            begin = j+1;
        }
      cout << str << endl;
    }
  }

  return 0;
}
