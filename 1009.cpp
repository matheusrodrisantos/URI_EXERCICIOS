#include <iostream> 
#include <stdio.h>
#include <string>
using namespace std;

int main(){
    float n1,n2;
    string nome;
    cin>>nome>>n1>>n2;
    n2=n2*15/100;
    n1=n1+n2;
    printf("TOTAL = R$ %0.2f\n",n1); 
    return 0;
}