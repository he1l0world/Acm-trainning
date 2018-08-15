#include<iostream>
using namespace std;
int sum(int t , int a)
{
  int s  = 0 ;
  while(a)
  {
    s += a%t;
    a /= t;
  }
  return s;
}
int main()
{
  for(int i  = 2991 ; i < 100000 ; ++i )
  {
    if(sum(10,i) == sum(12, i) && sum(12 , i) == sum(16, i))
      cout << i << endl;
  }
  return 0;
}
