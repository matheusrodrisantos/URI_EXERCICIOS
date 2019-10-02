#include <iostream>
#include <math.h> 
using namespace std;

int main()
{
    int i;
    while(cin>>i)
    {
        if(i<=1)
        {
            cout<<0<<endl;
        }   
        else
        {
            cout<<log2(i)<<endl;   
        }
    }
    return 0;
}