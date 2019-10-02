#include <iostream>
using namespace std;
int main(){
    int m,n,t,maior,menor;
    
    while(cin>>m>>n)
    {
        t=0;
        if(m>n){ maior=m;menor=n;}
        else if(n>m){ maior=n;menor=m;}
        if((m<=0)or(n<=0))
        {
            break;
        }
        if(m==n)
        {
            t=m;
            cout<<t<<" Sum="<<t<<'\n';
        }
        else
        {
            
            for(int i=menor;i<=maior;i++)
            {
                t=t+i;
                cout<<i<<" ";
            }
            cout<<"Sum="<<t<<'\n';
        }
    }
    return 0;
}
