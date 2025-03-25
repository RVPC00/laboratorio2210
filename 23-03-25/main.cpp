#include <iostream>

using namespace std;
int primos(){
    int i, n, d=2, cp=0, de;
    cout<<"ingrese los numeros que desea imprimir\n";
    cin>>n;
    while(cp<n){
        de=0;
        for(i=1;i<=d;i++){
            if(d%i==0){
                de++;
            }
        }
        if(de==2){
            cp++;
            cout<<d<<" ";
        }
        d++;
    }
}
int serie2(){
    int i, n, d=0, cn=0, c=1;
    cout<<"ingrese los numeros de la serie que desea imprimir\n";
    cin>>n;
    for(i=1;i<=n;i++){
        d=d+c;
        cout<<d<<" ";
        c=i*3;
        cn++;
        if(cn==n){
            break;
        }
    }
}
int tabla1(){
    int i, j, n, c;
    cout<<"ingrese los numeros de la tabla que desea imprimir\n";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=4;j++){
            c=i*j;
            cout<<c<<" ";
        }
    cout<<"\n";
    }
}
int tabla2(){
    int i, j, n, c, x=0, y=1;
    cout<<"ingrese los numeros de la tabla que desea imprimir\n";
    cin>>n;
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            c=x+y;
            cout<<c<<" ";
            if(i>1){
                x=y;
                y=c;
            }
        }
        cout<<"\n";
    }
}
int main()
{
    int op;
    cout << "Ingrese la opcion que desea";
    cout<<"\n1.- Serie 1\n";
    cout<<"\n2.- Serie 2\n";
    cout<<"\n3.- Tabla 1\n";
    cout<<"\n4.- Tabla 2\n";
    cin>>op;
    while(op!=5){
        switch(op){
            case 1: primos();
                    break;
            case 2: serie2();
                    break;
            case 3: tabla1();
                    break;
            case 4: tabla2();
                    break;
        }
    }
    return 0;
}
