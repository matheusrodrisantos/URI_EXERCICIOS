#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int*vet=new int[10];
	cout<<"Digite um numero:";
	cin>>*(vet);
	cout<<"Você digitou: "<<*(vet)<<"\n";

	cout<<"Digite outro numero:";
	cin>>*(vet+1);
	cout<<"Você digitou:"<<*(vet+1)<<"\n";
	
	 		
		
	return 0;
}
