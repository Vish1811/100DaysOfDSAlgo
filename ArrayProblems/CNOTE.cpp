#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,k,n,preq;
    cin>>t;
    for(int po=0;po<t;po++)
    {
        bool b=0;
        cin>>x>>y>>k>>n;
        int p[n],c[n];
        for(int i=0;i<n;i++)
            cin>>p[i]>>c[i];
         preq=x-y;
         if(preq<1)
            b=1;
          else
         {
             for(int i=0;i<n;i++)
             {
                   if((p[i]>=preq)&&c[i]<=k)
                    {
                        b=1;
                        break;
                    }
             }
         }
         if(b==1)
            cout<<"LuckyChef"<<endl;
         else
            cout<<"UnluckyChef"<<endl;
    }
	return 0;
}