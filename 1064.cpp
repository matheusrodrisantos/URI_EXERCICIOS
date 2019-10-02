#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{ 
    double n,x=0,s=0;
    while (cin>>n)
    {
        if(n>0)
        {
            s=n+s;
            x=x+1;
        }   
    }
    cout<<x<<" valores positivos\n";
    double m=s/x;
    printf("%.1f\n",m);
    return 0;
}