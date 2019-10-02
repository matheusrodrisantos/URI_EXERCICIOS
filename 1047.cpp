#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int h1,h2,m1,m2,rh,rm,rt;
    cin>>h1>>m1>>h2>>m2;
    if(h2>=h1){
        rh=h1*60+m1;
        rm=h2*60+m2;
        rt=rh-rm;
        if(m1==m2)
        {
            cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
        }else{
            cout<<"O JOGO DUROU "<<abs(rt/60)<<" HORA(S) E "<<abs(rt%60)<<" MINUTO(S)\n";
        }
    }else{
        rh=h1*60+m1;
        rm=h2*60+m2+24*60;
        rt=rh-rm;
        cout<<"O JOGO DUROU "<<abs(rt/60)<<" HORA(S) E "<<abs(rt%60)<<" MINUTO(S)\n";
    }
    return 0;
}