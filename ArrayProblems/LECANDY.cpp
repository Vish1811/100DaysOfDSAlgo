#include<iostream>
using namespace std;
int main(){
    long long int t;
    long long int n;
    long long int c;
     cin >> t;
     while(t--){
        cin>>n>>c;
        int s=0;
        int x=0;
        for(int i=0;i<n;i++)
        {cin >>	x;
        s = s +x;
         }   
        if(s<=c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
     }

}
