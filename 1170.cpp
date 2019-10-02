#include <iostream>
using namespace std;

int main()
{
    int n,cont; 
    float a;
    cin>>n;
    while (n--)
    {
        cin>>a;
        cont=0;
        while (a>1)
        {
            cont=cont+1;
            a=a/2;
        }
        cout<<cont<<" dias\n";
    }
    return 0;
}