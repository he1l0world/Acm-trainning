#include<iostream>
#include<cmath>
int main ()
{
  using namespace std;
  long long  n, m;
  while(cin >> n >> m )
  {
    long long  odd = 0 , even = 0;
    for(long long  i = (n>m?m:n) ; i <= (n>m?n:m) ; i++)
    {
      if((i&1) == 0)
        even += pow(i,2);
      else
        odd += pow(i,3);
    }
    cout << even << " " << odd <<endl;
  }
  return 0;
}
