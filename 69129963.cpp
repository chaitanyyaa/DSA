#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,v,s1=0;
	    
	    cin>>n>>k>>v;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        s1+=a[i];
	    }
	    int s;
	    int  r;
	    s=(n+k)*v;
	    r=(s-s1)/k;
	    if((s-s1)%k==0 && (s-s1)>0){
	        cout<<r<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}
