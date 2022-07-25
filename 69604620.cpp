#include<iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
    
    long long a, b , n;

    cin>>a>>b>>n;

    if(a%b==0){

      cout<<-1<<endl;
      continue;
    }

    long long n1= n;

    if(n1%a !=0){

      n1 = n+a-(n1%a);

    }

    while(!(n1%a==0 && n1%b!=0)){

       n1=n1+a;

    }
    cout<<n1<<endl;
 
  }
  return 0;

  
}

