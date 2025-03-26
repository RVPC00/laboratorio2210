#include <iostream>

using namespace std;
//RECURSIVIDAD
//calcula los digitos del factorial
int suma(int n, int s){
    if(n==0){
        return (s);
    }
    else{
        s=s+n;
        return (suma((n-1), s));
    }
}
//calcula el factorial de un numero
long double factorial(int n){
    if(n==0){
        return (1);
    }
    else{
        return (n*factorial(n-1));
    }
}

int main()
{
    int num=0, rs=0;
    long double res=0;
    cout<<"INGRESE UN NUMERO= ";
    cin>>num;
    res=factorial(num);
    rs=suma(num,0);
    cout<<"\nEL FACTORIAL ES= "<<res;
    cout<<"\nLA SUMA DE DIGITOS ES= "<<rs;
    return 0;
}
