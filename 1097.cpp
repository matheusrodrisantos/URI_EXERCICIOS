#include <iostream> 
using namespace std;
int main()
{   
    int aux=7,x,j=7;
    for(int i=1;i<=9;i=i+2){
        
        for(x=1;x<=3;x++)
        {
             cout<<"I="<<i<<" J="<<j<<"\n";
             j--;
        }
        aux=aux+2;
        j=aux;
    }
    return 0;
}