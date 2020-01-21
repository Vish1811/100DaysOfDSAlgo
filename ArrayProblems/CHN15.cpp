#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    long long int n;
    long long int k;
     cin >> t;
     while(t--){
        cin>>n>>k;
        int ans = 0;
        for(int i = 0;i<n;i++){
            int val;
            cin>>val;
            if(((val+k)%7)==0){
                ans++;
            }
        }
        cout<<ans<<endl;
     }

}
