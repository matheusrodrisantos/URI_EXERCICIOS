#include <iostream>
using namespace std;

int main()
{
    long int x,y,l;
    cin>>x>>y;
    l=0;
    for(int i=1;i<=y;i++)
    {
        
        l=l+1;
        if(l==x)
        {
            cout<<i;
            l=0;
            cout<<"\n";
        }else{
            cout<<i<<" ";
        }
    }
   return 0;
}