#include <bits/stdc++.h>
using namespace std;
int josephus(int n, int m);

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		cout<<josephus(n,m)<<endl;
	}
	return 0;
}
int josephus(int n, int k)
{
    if (n == 1) 
    	return 1;
    else
    	return (josephus(n - 1, k) + k-1) % n + 1; 
}
