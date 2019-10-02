#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{ 
    int n,x=0;
    while (cin>>n)
    {
        if(n%2==0)
        {
            x=x+1;
        }   
    }
    cout<<x<<" valores pares\n";
    return 0;
}