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
#define sc                second;
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)  


void solve()
{
  int n , k ,l;
  cin>>n>>k>>l;

  int a[n];
  rep(i,0,n)
  {
     cin>>a[i];
  }
 int max=*max_element(a,a+n);
 if(max == a[n-1]){
    cout<<"Yes"<<endl;
 }else
 {
    if((l-1)*k+a[n-1]>max){
       cout<<"Yes"<<endl;
    }else{
       cout<<"No"<<endl;
    }
 }


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
#define sc                second;
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)  


void solve()
{
  int n , k ,l;
  cin>>n>>k>>l;

  int a[n];
  rep(i,0,n)
  {
     cin>>a[i];
  }
 int max=*max_element(a,a+n);
 if(max == a[n-1]){
    cout<<"Yes"<<endl;
 }else
 {
    if((l-1)*k+a[n-1]>max){
       cout<<"Yes"<<endl;
    }else{
       cout<<"No"<<endl;
    }
 }


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