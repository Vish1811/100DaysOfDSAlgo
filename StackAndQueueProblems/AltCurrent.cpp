#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ios::sync_with_stdio(0);//This increases the speed of the c++
	cin.tie(0);
	
	string s;
	cin >> s;
	stack<char> st;
	
	for (auto c : s) //shortcut for loop for stack
    {
		if (!st.empty() && st.top() == c) {
			st.pop();
		} else {
			st.push(c);
		}
	}
	cout << (st.empty() ? "Yes\n" : "No\n");
	return 0;
}