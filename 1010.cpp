#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int c1,c2,q1,q2;
    float v1,v2,t;
    cin>>c1>>q1>>v1;
    cin>>c2>>q2>>v2;
    t=q1*v1+q2*v2;

    cout<<"VALOR A PAGAR: R$ ";
    printf("%0.2f\n",t);
    return 0;
}