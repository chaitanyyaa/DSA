#include<iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
  int num,sum=1;
  cin>>num;
  if(num==1)
  {
    cout<<"1\n"<<endl;
    continue;
  }
  while(sum*2 <= num)
    sum*=2;
  int b = num-sum+1;
  if(num==sum)
    cout<<sum/2<<endl;
  else
    cout<<max(b,sum/2)<<endl;
}
return 0;
}