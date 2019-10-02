#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int h1,h2;
    cin>>h1>>h2;
    if(h1>h2){
        cout<<"O JOGO DUROU "<<(abs((h1-24))+h2)<<" HORA(S)\n";
    }else if(h1==h2){
        cout<<"O JOGO DUROU 24 HORA(S)\n";
    }else if(h1<h2){
        cout<<"O JOGO DUROU "<<h2-h1<<" HORA(S)\n";
    }
    return 0;
}