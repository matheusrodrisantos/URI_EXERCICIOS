#include <iostream>
#include <stdlib.h> 
using namespace std;
int main()
{
    int n, h,m,s,aux;
    cin>>n;
    h=n/3600;
    aux=h*3600-n;
    m=aux/60;
    aux=m*60-aux;
    s=aux;
    cout<<abs(h)<<":"<<abs(m)<<":"<<abs(s)<<"\n";
    return 0;
}