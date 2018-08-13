#include<iostream>
#include<string>
#include<iomanip>
int main ()
{
  using namespace std;
  int t ,a ,b;
  double c;
  char n; 
  while(cin >> t)
  {
    for(int i = 0 ; i < t ; ++i)
    {
      cin.get();cin.get(n);
      cin >> a >> b;
      switch(n)
      {
        case '+' : c = a+b; break;
        case '-' : c = a- b; break;
        case '*' : c = a * b ; break;
        case '/' : c = (double)a / (double)b ; break;
      }
      ostream::fmtflags old = cout.flags();
      if(n == '/' && a%b )
        //printf("%.2lf\n",c);
        cout << fixed << setprecision(2) << c << flush <<endl;
      else
        //printf("%.0lf\n",c);
        cout << c << flush << endl;
    }
  }
  return 0;
}
