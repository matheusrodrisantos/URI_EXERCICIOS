#include <iostream>
using namespace std;
int main()
{
    double x;
    cin>>x;
    if((x>100) or (x<0))
    {
        cout<<"Fora de intervalo\n";
    }
    else if(x<=25)
    {   
        cout<<"Intervalo [0,25]\n";
    }
    else if(x<=50)
    {
        cout<<"Intervalo (25,50]\n";
    }
    else if(x<=75)
    {
        cout<<"Intervalo (50,75]\n";
    }
    else if(x<=100)
    {
        cout<<"Intervalo (75,100]\n";
    }
    return 0;
}