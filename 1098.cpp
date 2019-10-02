#include <iostream>
using namespace std;
int main(){
    double j=1;
    for(double i=0;i<=2;i=i+0.2)
    {
        for(double x=1;x<=3;x++){
            j=x+i;
            cout<<"I="<<i<<" J="<<j<<"\n";    
        }
    }
    return 0; 
}