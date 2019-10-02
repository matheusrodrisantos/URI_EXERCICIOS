#include <iostream>
using namespace std;

int fatorial(int n,int aux=1)
{
    aux=n*aux;
    n--;   
    if(n>1)
    {
        fatorial(n,aux);
    }
    else
    {
        return aux;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<fatorial(n)<<"\n";
    return 0;
}
