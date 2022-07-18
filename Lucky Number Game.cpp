#include <bits/stdc++.h>
using namespace std;

int main() {
   // your code goes here
   /*ALICE
    BOB*/
   long long t;
   cin>>t;
   while(t--){
       long long n,b,a;
       cin>>n>>b>>a;
       long long arr[n];
       map<char,int>mpp;
       for(int i = 0 ; i < n ; i++)cin>>arr[i];
       for(int i = 0 ; i < n ; i++){
           if(arr[i] % b == 0 and arr[i] % a !=0){
               mpp['b']++;
           }
           if(arr[i] % a == 0 and arr[i] % b !=0){
               mpp['a']++;
           }
           if(arr[i] % a ==0 and arr[i] % b ==0){
               mpp['c']++;
           }
       }
       if(mpp['c'] == 0 and mpp['b'] <= mpp['a']){
           cout<<"ALICE"<<"\n";
       }
       else if(mpp['c']==0 and mpp['b'] > mpp['a']){
           cout<<"BOB"<<"\n";
       }
       else if(mpp['c']+mpp['b'] > mpp['a']){
           cout<<"BOB"<<"\n";
       }
       else{
           cout<<"ALICE"<<"\n";
       }
       
       
   }
   return 0;
}
