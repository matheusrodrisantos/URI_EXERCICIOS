#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n,resto,aux; 
    cin>>n;
    cout<<n<<'\n';
    aux=n/100;
    cout<<aux<<" nota(s) de R$ 100,00\n";
    
    resto=n-aux*100;
    aux=resto/50;
    cout<<aux<<" nota(s) de R$ 50,00\n";
    
    resto=resto-aux*50;
    aux=resto/20;
    cout<<aux<<" nota(s) de R$ 20,00\n";

    resto=resto-aux*20;
    aux=resto/10;
    cout<<aux<<" nota(s) de R$ 10,00\n";

    resto=resto-aux*10;
    aux=resto/5;
    cout<<aux<<" nota(s) de R$ 5,00\n";

    resto=resto-aux*5;
    aux=resto/2;
    cout<<aux<<" nota(s) de R$ 2,00\n";

    resto=resto-aux*2;
    aux=resto/1;
    cout<<aux<<" nota(s) de R$ 1,00\n";

    return 0;
}