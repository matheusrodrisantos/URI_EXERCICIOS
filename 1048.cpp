#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    double sal;
    cin>>sal;
    if(sal<=400)
    {
        printf("Novo salario: %0.2f\n",sal*1.15);
        printf("Reajuste ganho: %0.2f\n",sal*0.15);
        printf("Em percentual: 15 %%\n");
    }
    else if(sal<=800)
    {
        printf("Novo salario: %0.2f\n",sal*1.12);
        printf("Reajuste ganho: %0.2f\n",sal*0.12);
        printf("Em percentual: 12 %%\n");
    }
    else if(sal<=1200)
    {
        printf("Novo salario: %0.2f\n",sal*1.10);
        printf("Reajuste ganho: %0.2f\n",sal*0.10);
        printf("Em percentual: 10 %%\n");

    }
    else if(sal<=2000)
    {
        printf("Novo salario: %0.2f\n",sal*1.07);
        printf("Reajuste ganho: %0.2f\n",sal*0.07);
        printf("Em percentual: 7 %%\n");
    }
    else if(sal>2000)
    {
        printf("Novo salario: %0.2f\n",sal*1.04);
        printf("Reajuste ganho: %0.2f\n",sal*0.04);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}