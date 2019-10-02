#include <iostream>
using namespace std;
int sum(int x,int y)
{
    int r=0;
    for(int i=x+1;i<y;i++)
    {
        if(i%2!=0){
            r=r+i;
        }  
    }
    return r;
}
int main()
{
    int x,y,r,n;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        if(y<x){ 
            r=sum(y,x);    
        }
        else{
            r=sum(x,y);   
        }
        cout<<r<<'\n';
    }
    return 0;
}