#include <iostream>

using namespace std; 
int main()
{
   long long n1;
   long long n2;
    while (cin>>n1>>n2)
    {
        if(n1<n2)
        {
            cout<<n2-n1<<'\n';
        }else{
            cout<<n1-n2<<'\n';   
        }
    }
    return 0;
}
