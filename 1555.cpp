//#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int x,y,rafael,beto,carlos,n;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        rafael=pow((3*x),2)+pow(y,2);
        beto=2*pow(x,2)+pow((5*y),2);    
        carlos=-100*x+pow(y,3);
        if(rafael>beto and rafael>carlos)
        {
            cout<<"Rafael ganhou\n";
        }
        else if(beto>rafael and beto>carlos)
        {
            cout<<"Beto ganhou\n";
        }
        else if(carlos>rafael and carlos>beto)
        {
            cout<<"Carlos ganhou\n";
        }
    }
    return 0;
}
