#include <iostream>
#include <math.h>
using namespace std;
int verPrimo(int raiz, int primo){
    int i=2;
    int retorno;
    while(i<=raiz)
    {
        int aux=primo%i;
        if(aux==0)
        {
            retorno=0; 
            return retorno;
        }
        i+=1;
    }
    //cout<<i<<'\n';
    retorno=1; 
    return retorno;
}
int main(){
    long rep,primo,raiz;
    double numero;
    cin>>rep;
    while(rep--)
    {
        cin>>numero;
        raiz=int(pow(numero,(0.5)));
        primo=int(numero);

        int result=verPrimo(raiz,primo);
        if(result==0){
            cout<<"Not Prime\n";
        }else{
            cout<<"Prime\n";
        }
    }
    return 0;
}
