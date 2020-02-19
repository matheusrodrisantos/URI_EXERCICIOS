#include <iostream>
#define MAX 10
using namespace std;

class Carro
{
	public:
		char nome[100];
		char cor[20];
		char placa[20];
		double preco;
};
void ordena(Carro carros[],int tam)
{
	int i, j, aux; 
	for(i=tam;i>=0;i--)	
	{
		for(j=1;j<=i;j++)
		{
			if(carros[j-1].preco>carros[j].preco)
			{
				aux=carros[j-1].preco;
				carros[j-1].preco=carros[j].preco;
				carros[j].preco=aux;
			}	
		}
	}
}
int main(int argc, char * argv[])
{	
	char resp; 
	Carro carros[MAX];	
	int i =0;
	while(true)
	{
		cout<<"Digite o nome do carro: ";
		cin>>carros[i].nome;
		
		cout<<"preco do carro\n";
		cin>>carros[i].preco;
                			
		cout <<"Deseja continuar ? <SIM> <NÃO> ";
		cin>>resp;
		if(resp!='S'){
			break;
		}
		cout<<'\n';
		i++;	
	}	

	for(int j=0;j<=i;j++)
	{
             cout<<"Nome do carro: "<<carros[j].nome;
             cout<<"\nPreço: R$ "<<carros[j].preco;
	     cout<<"\n";                     
	}
	ordena(carros,i);
	cout<<"--------------------------------\n";
	for(int j=0;j<=i;j++)
        {
             cout<<"Nome do carro: "<<carros[j].nome;
             cout<<"\nPreço: R$ "<<carros[j].preco;
             cout<<"\n";
        }
	

	return 0;
}
