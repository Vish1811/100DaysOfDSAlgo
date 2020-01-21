#include <iostream> 
#include <stack> 
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long int i,m=0,c=0,p=0;
	    string str;
	    cin >>str;
	    stack<char>s;
	    for(i=0;i<str.length();i++)
	    {
	        if(str[i]=='<')
	        {
	            s.push('<');
	            c++;
	        }
	        else
	        {
	            if(s.size()==0)
	            break;
	            else
	            {
	                p++;
	            s.pop();
	            if(s.size()==0)  
	                m=c+p;
	            }
	        }
	    }
	    cout<<m<<endl;
	}
	return 0;
}
