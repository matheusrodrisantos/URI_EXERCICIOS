#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    float n1,aux=0;
    int n=0;
    while (cin>>n1)
    {
        if(n1<0 || n1>10){
            cout<<"nota invalida\n";
        }
        else{
            aux=n1+aux;
            n=n+1;
        }
        if(n==2){
            printf("media = %.2f\n",(aux/2));
        }
    }
    return 0;
}