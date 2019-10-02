#include <stdio.h>
#include <iostream> 
#include <string.h>
 
using namespace std; 

int main()
{
    char   sheldon[8];
    char  raj[8];
    int n,m=0;
    while(cin>>n)
    {
        while(n--)
        {
          m++;
          scanf("%s %s",sheldon,raj);          
          if(strcmp(sheldon,raj) == 0 )
          {
              cout<<"Caso #"<<m<<": De novo!"<<endl;
          }
          //1
          else if(strcmp(sheldon,"tesoura") == 0 and strcmp(raj,"papel") == 0)
          {
              cout<<"Caso #"<<m<<": Bazinga!"<<endl;
          }
          //2
          else if(strcmp(sheldon,"papel") == 0 and strcmp(raj,"pedra") == 0)
          {
              cout<<"Caso #"<<m<<": Bazinga!"<<endl;
          }
          //3
          else if(strcmp(sheldon,"pedra") == 0 and strcmp(raj,"lagarto") == 0)
          {
              cout<<"Caso #"<<m<<": Bazinga!"<<endl;
          }
          //4
          else if(strcmp(sheldon,"lagarto") == 0 and strcmp(raj,"Spock") == 0)
          {
              cout<<"Caso #"<<m<<": Bazinga!"<<endl;
          }
          //5
          else if(strcmp(sheldon,"Spock") == 0 and strcmp(raj,"tesoura") == 0)
          {
              cout<<"Caso #"<<m<<": Bazinga!"<<endl;
          }
          //6
          else if(strcmp(sheldon,"tesoura") == 0 and strcmp(raj,"lagarto") == 0)
          {
              cout<<"Caso #"<<m<<": Bazinga!"<<endl;
          }
          //7
          else if(strcmp(sheldon,"lagarto") == 0 and strcmp(raj,"papel") == 0)
          {
              cout<<"Caso #"<<m<<": Bazinga!"<<endl;
          }
          //8
          else if(strcmp(sheldon,"papel") == 0 and strcmp(raj,"Spock") == 0)
          {
              cout<<"Caso #"<<m<<": Bazinga!"<<endl;
          }
          //9
          else if(strcmp(sheldon,"Spock") == 0 and strcmp(raj,"pedra") == 0)
          { 
              cout<<"Caso #"<<m<<": Bazinga!"<<endl;
          }
          //10
          else if(strcmp(sheldon,"pedra") == 0 and strcmp(raj,"tesoura") == 0)
          { 
              cout<<"Caso #"<<m<<": Bazinga!"<<endl;
          }
          else{
              cout<<"Caso #"<<m<<": Raj trapaceou!"<<endl;
          }
        }
    }
    return 0;
}