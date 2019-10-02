#include <iostream>


using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double maior,menor,medio;
    if((b>a) and (b>c)){
        maior=b;
        if(a<c){
            menor=a;
            medio=c;
        }else{
            menor=c;
            medio=a;
        }
    }
    else if((c>a) and (c>b))
    {   
        maior=c;
        if(b<a)
        {
            menor=b;
            medio=a;
        }else{
            menor=a;
            medio=b;
        }
    }
    else{
        maior=a;
        if(b<c)
        {
            menor=b;
            medio=c;
        }else{
            menor=c;
            medio=b;
        }
    }
    a=maior;
    b=medio;
    c=menor;
    if(a>=(b+c))
    {
        cout<<"NAO FORMA TRIANGULO\n";
    }
    else
    {
        if((a*a)==(b*b)+(c*c)){
            cout<<"TRIANGULO RETANGULO\n";
        }
        if((a*a)>(b*b)+(c*c)){
            cout<<"TRIANGULO OBTUSANGULO\n";
        }
        if((a*a)<(b*b)+(c*c)){
            cout<<"TRIANGULO ACUTANGULO\n";
        }
        if((a==b) and (b==c)){
         cout<<"TRIANGULO EQUILATERO\n";
        }
        if(((a==b)and (b!=c)) or ((b==c)and(c!=a)) or ((a==c)and(c!=b))){
            cout<<"TRIANGULO ISOSCELES\n";
        }
    }
    return 0;
}