#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int a,b,q,r,tmp;
    cin>>a;
    cin>>b;
    
    if(b<0){
        tmp=b*-1;
    }else{
        tmp=b;
    }
    r=a%tmp;
    q=(a-r)/b;
    cout<<q<<' '<<r<<'\n';
    return 0;
}