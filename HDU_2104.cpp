#include<iostream>
int gcd(int a, int b)
{
  int max , min ,temp;
  max = a>b?a:b;
  min = a>b?b:a;
  while(min)
  {
    temp = min;
    min = max % min;
    max = temp;
  }
  return (max == 1 );
}
int  main ()
{
  using namespace std;
  int n , m;
  while(cin >> n >> m &&(n != -1 && m != -1))
  {
    if(gcd(n,m))
      cout << "YES" << endl;
    else
      cout << "POOR Haha" << endl;
  }
  return 0;
}
