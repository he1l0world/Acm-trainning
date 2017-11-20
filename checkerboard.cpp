/*************************************************************************
	> File Name: checkerboard.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月18日 星期六 09时35分50秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
char a[8][8];
int col[10];
int sum= 0;
int n,k;
void dfs(int row ,int num)
{
    if(num == k)
    {
        sum++;
        return ;
    }
    for(int i = row ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(a[i][j] != '.' && !col[j])
            {
                col[j] = 1;
                dfs(i,num+1);
                col[j] = 0;
            }
        }
    }
}
int main ()
{
    while(scanf("%d %d",&n,&k) != 0)
    {
        sum = 0;
        if(n == -1 && k==-1)
            break;
        memset(col,0,sizeof(col)); 
        for(int i = 0; i < n ;i++)
        {
            cin>>a[i];
        }
        dfs(0,0);
        cout << sum << endl;
    }
    return 0;
}
