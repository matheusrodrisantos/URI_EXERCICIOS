#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        if(n!=2002){
            cout<<"Senha Invalida\n";
        }else{
            cout<<"Acesso Permitido\n";
            break;
        }
    }
    return 0;   
}