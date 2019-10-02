#include <iostream>
#include <stdio.h>
using namespace std;
int main(){ 
    double r,pi,v;
    pi=3.14159;
    cin>>r; 
    v=(4/3.0)*pi*(r*r*r);
    printf("VOLUME = %0.3f\n",v);
    return 0;
}