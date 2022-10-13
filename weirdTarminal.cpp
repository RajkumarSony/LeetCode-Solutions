#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    getline(cin,s);
    int ans=0;
    istringstream ss(s);
    while(ss)
    {
        string word;
        int flag=0;
        ss>>word;
        if(word=="") break;
        for(int i=0;i<word.length();i++)
        if(!isalpha(word[i]))
        {
            if(i!=0){
            if(i==word.length()-1){
            if(word[i]==','||word[i]=='.'||word[i]==';'||word[i]==':'||word[i]=='?'||word[i]=='!') continue;}
            else if(word[i]=='.'&&word[i+1]!='.') {flag++;break;}
            else if(word[i]=='-'&&isalpha(word[i+1])) continue;
            else {flag++;break;}
            }
            else
            {
                flag++;break;
            }
            
        }
 
        if(flag==0) {ans++;
        //cout<<word<<" "<<word.length()<<endl;
        }
    }
    cout<<floor((ans-1)/2) +1;
}
