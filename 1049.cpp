#include <iostream>
#include <string>
using namespace std;

int main()
{
    string palavra1, palavra2, palavra3;
    cin>>palavra1>>palavra2>>palavra3;
    if(palavra1=="vertebrado")
    {
        if(palavra2=="ave")
        {
            if(palavra3=="carnivoro")
            {
                cout<<"aguia\n";
            }
            else if(palavra3=="onivoro")
            {
                cout<<"pomba\n";
            }
        }
        else if(palavra2=="mamifero")
        {
            if(palavra3=="onivoro")
            {
                cout<<"homem\n";
            }
            else if(palavra3=="herbivoro")
            {
                cout<<"vaca\n";
            }
        }
    }
    else if(palavra1=="invertebrado")
    {
        if(palavra2=="inseto")
        {
            if(palavra3=="hematofago")
            {
                cout<<"pulga\n";
            }
            else if(palavra3=="herbivoro")
            {
                cout<<"lagarta\n";
            }
        }
        else if(palavra2=="anelideo")
        {
            if(palavra3=="hematofago")
            {
                cout<<"sanguessuga\n";
            }
            else if(palavra3=="onivoro")
            {
                cout<<"minhoca\n";
            }
        }
    }
    return 0;
}