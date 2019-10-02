#include <iostream>
using namespace std;

int main()
{
    int n,n1;
    cin>>n;
    while (n--)
    {
        cin>>n1;
        if(n1==0)
        {
            cout<<"NULL\n";
        }
        else if(n1<0)
        {
            if((n1%2)==0)
            {
                cout<<"EVEN NEGATIVE\n";
            }
            else
            {
                cout<<"ODD NEGATIVE\n";
            }
        }
        else
        {
            if((n1%2)==0)
            {
                cout<<"EVEN POSITIVE\n";
            }
            else
            {
                cout<<"ODD POSITIVE\n";
            }
        }
    }
    return 0;
}