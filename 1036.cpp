#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
    double a,b,c,delta,raiz,x,x2;
    cin>>a>>b>>c;
    if(a==0)
    {
        cout<<"Impossivel calcular\n";
    }
    else
    {
        delta=b*b-4*a*c;
        if(delta<0)
        {
            cout<<"Impossivel calcular\n";
        }
        else
        {
            delta=pow(delta,0.5);
            x=(-1*b+delta)/(2*a);
            x2=(-1*b-delta)/(2*a);
            printf("R1 = %0.5f\n",x);
            printf("R2 = %0.5f\n",x2);
        }
    }


    return 0;
}