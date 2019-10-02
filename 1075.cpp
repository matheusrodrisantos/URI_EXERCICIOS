#include <iostream>
using namespace std;

int main(){
    long n; 
    cin>>n;
    for(long i=1;i<10000;i++)
    {
        if(i%n==2)
        {
            cout<<i<<"\n";
        }
    }
    return 0;    
}