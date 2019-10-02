#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    double a,b,c,at,atr,ac,aq,are,pi;
    cin>>a>>b>>c;
    pi=3.14159;
    at=(a*c)/2;
    ac=pi*(c*c);
    atr=((a+b)*c)/2;
    aq=b*b;
    are=a*b;
    printf("TRIANGULO: %0.3f\n",at);
    printf("CIRCULO: %0.3f\n",ac);
    printf("TRAPEZIO: %0.3f\n",atr);
    printf("QUADRADO: %0.3f\n",aq);
    printf("RETANGULO: %0.3f\n",are);
    return 0;
}