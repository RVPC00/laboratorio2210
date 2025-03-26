#include <iostream>

using namespace std;
int invertir(int n, int inv){
    int u=0;
    u=n%10;
    inv=inv*10+u;
    if(n!=1){
        n=n/10;
        return (invertir(n,inv));
    }
}

int main()
{
    int n,r=0;
    cout<<"INGRESE EL NUMERO A INVERTIR\n";
    cin>>n;
    r=invertir(n,0);
    cout<<"\nNUMERO INVERTIDO\n"<<r;
    return 0;
}
