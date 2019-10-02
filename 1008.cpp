#include <iostream> 
#include <stdio.h>
using namespace std;

int main(){
    int n;
    float nh,vh,t;
    cin>>n>>nh>>vh;

    cout<<"NUMBER = "<<n<<"\n";
    t=nh*vh;
    cout<<"SALARY = U$ ";
    printf("%0.2f\n",t);
    return 0;
}