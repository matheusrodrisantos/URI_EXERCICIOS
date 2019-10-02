#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n1,n2,aux,inicio;
    cin>>inicio;
    while(inicio--)
    {
        cin>>n1>>n2;
        while(n2!=0)
        {
            aux=n1%n2;
            n1=n2;
            n2=aux;
        }
        cout<<n1<<'\n';
    }
    return 0;
}

