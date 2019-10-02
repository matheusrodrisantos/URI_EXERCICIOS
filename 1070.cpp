#include <iostream>
using namespace std;
int main()
{
    int x,t=0;
    cin>>x;
    for(int i=0;i<=6;i++)
    {
        if(x%2==0)
        {   
            x=(x+2)-1;
        }
        else if(x%2!=0)
        {
            cout<<x<<'\n';
            x=x+2;
        }
    }
    return 0;
}