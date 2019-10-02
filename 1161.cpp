#include <iostream>
using namespace std;
long long calculaFatorial(long long n)
{
    long long t=1,aux;
    while(n>0)
    {
        t=t*n;   
        n--;
    }
    return t;
}
int main()
{
    long long n1,n2,total,total2;
    while(cin>>n1>>n2)
    {
        total=calculaFatorial(n1);
        total2=calculaFatorial(n2); 
        cout<<total+total2<<'\n';
    }
    return 0;
}