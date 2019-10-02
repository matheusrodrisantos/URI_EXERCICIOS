#include <iostream>
using namespace std;

int main()
{
    int n,n1,in,out; 
    in=0;out=0;
    cin>>n;
    while (n--)
    {
        cin>>n1;
        if((n1>=10)and (n1<=20))
        {
            in++;
        }else
        { 
            out++;
        }
    }
    cout<<in<<" in\n";
    cout<<out<<" out\n";
    return 0;
}