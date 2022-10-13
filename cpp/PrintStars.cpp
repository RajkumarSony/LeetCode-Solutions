/*
Exampe:
INPUT:
3
9
2
5

OUTPUT:
*################*
**##############**
***############***
****##########****
*****########*****
******######******
*******####*******
********##********
******************

*##*
****

*########*
**######**
***####***
****##****
**********

*/



#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		  for(int i=0;i<n;i++)
            { 
            for(int j=0;j<=i;j++)
               cout<<"*";
            for(int j=2*(n-1);j>2*i;j--)
                cout<<"#";
            for(int j=0;j<=i;j++)
                cout<<"*";
            cout<<endl;    
            }
           cout<<endl;
	}
	return 0;

}
