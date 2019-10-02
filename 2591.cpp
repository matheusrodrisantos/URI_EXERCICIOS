
#include <iostream>
#include <string.h>
using namespace std;

int procuraA(char palavra[],int inicio=0)
{
    int total=0;
    for(int i=inicio;i<strlen(palavra);i++)
    {
      if(palavra[i]=='a')
      {
        total+=1;
      }
      else if(palavra[i]=='m')
      {
        break;
      }
    }
    return total;
}

int main(){
    char entrada[200];
    int n, pt1,pt2;
    cin>>n;
    while(n--)
    {
          cin>>entrada;
          pt1=procuraA(entrada);
          pt2=procuraA(entrada,pt1+4);
          cout<<"k";
          for(int i=0;i<pt1*pt2;i++){
            cout<<"a";
          }
        cout<<"\n";   
    }
    return 0;
}