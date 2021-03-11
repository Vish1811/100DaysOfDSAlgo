#include <bits/stdc++.h>
 using namespace std;
 //checking the working of a clone cmd
 //checking pull request

 int main()
 {
   int  n, arr[100];
   cin >> n;
   for(int i=0; i<n; i++) 
   {
     cin>>arr[i];
   }

   sort(arr, arr + n);

   for (int i=0; i<n; i++) 
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;

   return 0;
 }