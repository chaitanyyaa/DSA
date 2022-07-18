#include <bits/stdc++.h>
using namespace std;
 

int main() {
    
std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
   int t;
   cin>>t;
   while(t--){
       
       long long int n;
       cin>>n;
       if(n==2 || n==1){
          cout<<"1\n";
           continue;
       }else
       {
       long long int ans = n-2;
       ans = (1 + ans*(1+ans));
      
       
       cout<<ans<<"\n";
       }
       
   }
   return 0;
}
#include <bits/stdc++.h>
using namespace std;
 

int main() {
    
std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
   int t;
   cin>>t;
   while(t--){
       
       long long int n;
       cin>>n;
       if(n==2 || n==1){
          cout<<"1\n";
           continue;
       }else
       {
       long long int ans = n-2;
       ans = (1 + ans*(1+ans));
      
       
       cout<<ans<<"\n";
       }
       
   }
   return 0;
}
