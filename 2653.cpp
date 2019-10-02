#include <stdio.h>
#include <iostream>
#include <string.h> 
using namespace std; 

int main(){
    char * aux;
    char * pch;
    char entrada[1000000];
    int n=0;
    while(scanf(" %[^\n]",entrada)!=EOF)
        if(strlen(aux)==0)
            //strcat(aux,entrada);
            cout<<"adasa";
       // cout<<aux;
        // pch=strstr(aux,entrada);
        n++;
        cout<<n;        
    cout<<entrada<<endl;
    
   return 0;
}
