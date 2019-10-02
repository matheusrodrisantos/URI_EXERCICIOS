#include <iostream>
#include <math.h>
using namespace std; 
int cont(int n)
{
    int x=0;
    while(n>=1)
    {
        n=n/10;
        x+=1;
    }
    return x;
}
int main()
{
    int entrada, n1,n2,r; 
    cin>> entrada;
    while(entrada--)
    {
        cin>>n1>>n2;
        if(n1<n2)
        {
            cout<<"nao encaixa\n";
        }
        else if(n1==n2)
        {
            cout<<"encaixa\n";
        }
        else
        {
            int qtdn1,qtdn2;
            qtdn2=cont(n2);
            int sobra=n1-n2;
            int aux=pow(10,qtdn2);
            if((sobra%aux)==0){
                    cout<<"encaixa\n";
                } else{cout<<"nao encaixa\n";} 
        }
    }
    return 0;
}