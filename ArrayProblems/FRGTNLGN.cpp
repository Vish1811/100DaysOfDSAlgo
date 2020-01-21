#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int n,k,l,i;
	    cin>>n>>k;
	    vector<string> v(n);
	    map<string,int> m;
	    string s;
	    for(i=0;i<n;i++)cin>>v[i];
	    for(i=0;i<k;i++){
	        cin>>l;
	        while(l--){
	            cin>>s;
	            m[s]++;
	        }
	    }
	    for(i=0;i<n;i++){
	        if(m[v[i]])
	         cout<<"YES ";
	        else 
	         cout<<"NO ";
	    }
	    cout<<"\n";
	}
	return 0;
}