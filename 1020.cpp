#include <iostream>
#include <stdlib.h> 
using namespace std;
int main()
{
    int y, m,d,aux,n;
    cin>>n;
    y=n/365;
    cout<<abs(y)<<" ano(s)\n";
    aux=y*365-n;
    m=aux/30;
    cout<<abs(m)<<" mes(es)\n";
    aux=m*30-aux;
    d=aux;
    cout<<abs(d)<<" dia(s)\n";   
    return 0;
}