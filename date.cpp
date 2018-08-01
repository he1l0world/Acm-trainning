#include<iostream>
#include<string>
#include<regex>
#include<cstdlib>
int main ()
{
  using namespace std;
  string a;
  const int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  regex  e("([0-9]*)\/([0-9]*)\/([0-9]*)");
  int y , m , d;
  while(cin>> a )
  {
    int sum = 0;
    std::smatch sm;
    std::regex_match(a, sm ,e ,std::regex_constants::match_default);
    m = stoi( sm[2]);
    d = stoi( sm[3]);
    y = stoi( sm[1]);
    for(int i = 0 ; i < m-1 ; ++i)
      sum+=month[i];
    sum+=d;
    if(((y%4 == 0 && y%100 != 0)||(y%400 == 0)) && m>2)
      sum++;
    cout << sum <<endl;
  }
  return 0;
}
