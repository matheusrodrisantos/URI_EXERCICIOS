#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n,q;
    double coe=0,rat=0,sap=0,total=0;
    char t;
    cin>>n;
    while(n--)
    {
        cin>>q>>t;
        if(t=='C'){
            coe=coe+q;
        }else if(t=='R'){
            rat=rat+q;
        }else if(t=='S'){
            sap=sap+q;
        }
        total=total+q;
    }
    cout<<"Total: "<<total<<" cobaias\n";
    cout<<"Total de coelhos: "<<coe<<"\n";
    cout<<"Total de ratos: "<<rat<<"\n";
    cout<<"Total de sapos: "<<sap<<"\n";

    printf("Percentual de coelhos: %.2f %%\n",(coe/total)*100);
    printf("Percentual de ratos: %.2f %%\n",(rat/total)*100);
    printf("Percentual de sapos: %.2f %%\n",(sap/total)*100);
    return 0;
}