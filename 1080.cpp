#include <iostream>
using namespace std;

int main()
{
    int n,m,x,aux=0,p;
    for(int i=1;i<=100;i++)
    {
        cin>>n;

        if(n>aux)
        {
            m=n;
            p=i;
            aux=n;
        }
    }
    cout<<m<<'\n';
    cout<<p<<'\n';
    return 0;
}