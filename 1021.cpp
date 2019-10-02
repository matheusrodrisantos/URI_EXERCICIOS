#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string> 


using namespace std;

int main()
{
    int n,resto,aux; 
    double nd,restod;
    cin>>nd;
    n=int(nd);
    nd=nd-n;
    aux=n/100;
    
    cout<<"NOTAS:\n";
    cout<<aux<<" nota(s) de R$ 100.00\n";
    
    resto=n-aux*100;
    aux=resto/50;
    cout<<abs(aux)<<" nota(s) de R$ 50.00\n";
    
    resto=resto-aux*50;
    aux=resto/20;
    cout<<abs(aux)<<" nota(s) de R$ 20.00\n";

    resto=resto-aux*20;
    aux=resto/10;
    cout<<abs(aux)<<" nota(s) de R$ 10.00\n";

    resto=resto-aux*10;
    aux=resto/5;
    cout<<abs(aux)<<" nota(s) de R$ 5.00\n";

    resto=resto-aux*5;
    aux=resto/2;
    cout<<abs(aux)<<" nota(s) de R$ 2.00\n";

    resto=resto-aux*2;
    aux=resto/1;


    cout<<"MOEDAS:\n";
    cout<<abs(aux)<<" moeda(s) de R$ 1.00\n";
    aux=nd*100.0;
    resto=aux;
    aux=aux/50;

    cout<<abs(aux)<<" moeda(s) de R$ 0.50\n";



    resto=resto-aux*50;
    aux=resto/25;
    cout<<abs(aux)<<" moeda(s) de R$ 0.25\n";
    
    resto=resto-aux*25;
    aux=resto/10;
    cout<<abs(aux)<<" moeda(s) de R$ 0.10\n";
     
    resto=resto-aux*10;
    aux=resto/5;
    cout<<abs(aux)<<" moeda(s) de R$ 0.05\n";
    
    resto=resto-aux*5;
    aux=resto/1;
    cout<<abs(aux)<<" moeda(s) de R$ 0.01\n";
    
    return 0;
}