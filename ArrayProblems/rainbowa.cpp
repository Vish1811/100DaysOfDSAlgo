/*/ Author:amar1503/*/
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("Ofast")
#define fio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ull unsigned long long
#define ll long long
#define inf INT_MAX
#define mninf INT_MIN
#define Mod 1000000007
#define endl "\n"
#define cp(x) cout<<(x)<<" "
#define cl(x) cout<<(x)<<endl
#define nl   cout<<endl
//const double PI=3.1415926535897932384626433832;
//looping
#define For(i,a,b) for(int i=a;i<b;i++)
#define test(t)  int (t); cin>>(t); while((t)--)
#define array(a,n) int (n); cin>>(n); int a[n]; for(int i=0;i<(n);i++) cin>>a[i];
#define trace(x) clog<<#x<<": "<<x<<" "<<endl
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define printa(a,n) for(int i = 0 ; i < n ; i++) cout<<a[i]<<' '
#define printv(v)  for(int i=0;i<(v).size();i++) cout<<v[i]<<" "
//containers
#define F first
#define S second
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define all(v) (v).begin(),(v).end()
#define mp make_pair
#define itr(it, a) for(auto it = (a).begin(); it != (a).end(); it++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define ers(v)    sort(all(v)); (v).erase(unique(all(v)),(v).end())
typedef vector<int> vi;
typedef vector< vector< int > > vvi;
typedef pair <int, int> pii;
typedef vector < pair <int, int> > vpii;
//#define int long long
/*/-----------------------------Code begins----------------------------------/*/
int main(){
test(t){
int n;
cin>>n;
vi v(n);
map<int,int> m;
for(auto &x:v){
cin>>x;
m[x]++;}
int f=1,flag=1;
if(m.size()>7)
{
    cout<<"no\n";
    f=0;
    flag=0;
}
for(int i=1;i<8;i++){
    if(m[i]==0)
    {
      cout<<"no\n";
    f=0;
    flag=0;
break;
    }
}
if(flag)
for(int i=0;i<(v.size()+1)/2;i++){
    if(v[i]!=v[n-i-1])
    {cout<<"no\n";
    f=0;
break;}
if(i&&v[i]-v[i-1]!=0&&v[i]-v[i-1]!=1)
{
cout<<"no\n";
f=0;
break;}
}
if(f)
cout<<"yes\n";
}
}
