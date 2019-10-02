#include<iostream>
using namespace std;

int main(){
    int j=60,i=1;
    cout<<"I="<<i<<" J="<<j<<"\n";
    while (j!=0)
    {
        i=i+3;
        j=j-5;
        cout<<"I="<<i<<" J="<<j<<"\n";
    }
    return 0;
}