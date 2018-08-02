#include<iostream>
#include<cmath>
int narcissistic (int n)
{
  return (n == pow(n/100,3)+pow((n%100)/10,3)+pow((n%10),3));
}
int main()
{
  using namespace std;
  int m , n ;
  while(cin >> m >> n)
  {
    int flag = 0;
    for(int i = m ; i <= n ; ++ i)
    {
      if(narcissistic(i) )
       {
         if(flag != 0)
            cout << " " <<i;
         else
           cout << i;
         flag = 1;
       }
    }
    if(!flag)
      cout << "no";
    cout << endl;
  }
  return 0;
}
