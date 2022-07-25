#include<iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
    
   long long n, c=0,ans=0;

   cin>>n;

   long long a[n];
   for(long long i=0; i<n; i++){

    cin>>a[i];
   }
   for(long long  i=0; i<n; i++){

     if(a[i]==0){
      c=0;
     }else{
      c++;
     }

     ans+=c;

   }
   
   cout<<ans<<endl;
  }
  return 0;

  
}

