#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int i=1;i<=x;i=i+2)
    {
        if(i%2!=0)
        {
            cout<<i<<'\n';
        }
    }
}