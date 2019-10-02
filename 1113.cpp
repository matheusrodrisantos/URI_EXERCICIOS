#include <iostream>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if(n>m){
            cout<<"Decrescente\n";
        }else if(n==m){
            break;
        }
        else{
            cout<<"Crescente\n";
        }
    }
    return 0;
}