#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <string>


using namespace std; 

int main(){
    char entrada[1000000];
    int n=0;
    string aux;
    while(cin>>entrada)
    {
       cin>>n; 
       for(int i=0; i<n;i++)
       {
           int x; 
           cin>>x; 
           cout<<entrada[x-1];
       }
        cout<<endl;
    }
   return 0;
}
