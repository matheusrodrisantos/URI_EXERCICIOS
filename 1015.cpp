#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    double x1,x2,y1,y2,d,dx,dy;
    cin>>x1>>y1;
    cin>>x2>>y2;
    dx=pow((x2-x1),2);
    dy=pow((y2-y1),2);

    d=pow((dx+dy),0.5);
    printf("%0.4f\n",d);
    return 0;
}