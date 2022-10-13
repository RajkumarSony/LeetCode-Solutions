#include<iostream.h> 
using namespace std;
int main() {
    int a = 23;
    int b = 2;
    bool prime = true;
    while(b!=a){
        if(a%b == 0)
            {
                prime = false;
                break;
            }
        b++;
    }
    if(prime)
    cout<<"prime";
    else cout<<"not prime";
    return 0;
}
