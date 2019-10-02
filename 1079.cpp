#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int a;
    double n1,n2,n3,t;
    cin>>a;
    while(a--){
        cin>>n1>>n2>>n3;

        t=(n1*2+n2*3+n3*5)/10;
        printf("%.1f\n",t);
    }
    return 0;
}