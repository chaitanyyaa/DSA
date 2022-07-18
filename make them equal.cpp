#include "bits/stdc++.h"
using namespace std;

#define pb                push_back
#define ll                long long
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define aint(x)           (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(aint(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                secondḥ
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)  


void solve()
{
   int n , odd=0, even=0;
   cin>>n;
   int a[n];
   for(int i=0 ; i<n ;i++)
   {
      cin>>a[i];
      if(a[i]%2!=0){
         odd++;
      }
      else{
         even++;
      } 
   }
   int ans = even;
      if (odd % 2 == 0) {
         ans = min(ans, odd / 2);
      }
      cout << ans << endl;
    
}
   

signed main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);cout.tie(0);
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
   int t;
   cin>>t;
  while(t--)
   solve();
}#include "bits/stdc++.h"
using namespace std;

#define pb                push_back
#define ll                long long
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define aint(x)           (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(aint(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                secondḥ
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)  


void solve()
{
   int n , odd=0, even=0;
   cin>>n;
   int a[n];
   for(int i=0 ; i<n ;i++)
   {
      cin>>a[i];
      if(a[i]%2!=0){
         odd++;
      }
      else{
         even++;
      } 
   }
   int ans = even;
      if (odd % 2 == 0) {
         ans = min(ans, odd / 2);
      }
      cout << ans << endl;
    
}
   

signed main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);cout.tie(0);
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
   int t;
   cin>>t;
  while(t--)
   solve();
}