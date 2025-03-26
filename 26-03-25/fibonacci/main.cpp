#include <iostream>

using namespace std;
int fibo(int n){
    if (n<2){
        return (n);
    }
    else{
        return (fibo(n-1)+fibo(n-2));
    }
}
int main()
{
    int n=0,t=0;
    cout<<"INGRESE EL NUMERO DE TERMINO= ";
    cin>>n;
    t=fibo(n);
    cout<<"\n EL TERMINO ES= "<<t;
    return 0;
}
