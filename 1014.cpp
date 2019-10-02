#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double d,tl,consumo;
    cin>>d>>tl;
    consumo=d/tl;
    printf("%0.3f km/l\n",consumo);
    return 0;
}