#include <iostream>
using namespace std;

int main()
{ 
    double n,x=0;
    while (cin>>n)
    {
        if(n>0)
        {
            x=x+1;
        }   
    }
    cout<<x<<" valores positivos\n";
    return 0;
}