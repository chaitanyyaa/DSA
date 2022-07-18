#include <iostream> 
#include <iterator> 
#include <map> 
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
     int n,x=0,y;
     cin>>n;
     string str;
     cin>>str;
     for(int i=0;i<n-2;i++)
     {
      if(str[i]=='0'&&str[i+1]=='1')
      {
        x++;
      }
     }
     if(str[0]=='1')
     {
      x++;
     }
     if(str[n-2]=='0')
     {
      x++;
     }
     cout<<x<<endl;
     
     }
}