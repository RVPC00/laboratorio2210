#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


using namespace std;
void triangular(){
    int n,i,j;
    char no[100];
    system("cls");
    cout<<"ING. FRASE= ";
    cin>>no;
    //gets(no);
    n=strlen(no);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<" "<<no[j];
        }
        cout<<"\n";
    }
    getch();
}
void contador(){
    int n,i,cv=0,cc=0,cp=0;
    char no[100];
    system("cls");
    cout<<"ING. FRASE= ";
    cin>>no;
    n=strlen(no);
    for(i=0;i<n;i++){
       if (no[i]=='A'||no[i]=='E'||no[i]=='I'||no[i]=='O'||no[i]=='U'){
            cv++;
       }
       if (no[i]!='A'||no[i]!='E'||no[i]!='I'||no[i]!='O'||no[i]!='U'){
            cc++;
       }
    }
    cout<<"\nTOTAL VOCALES= "<<cv;
    cout<<"\nTOTAL CONSONANTES= "<<cc;
    getch();
}
void compara(){
    char n1[100],n2[100];
    system("cls");
    cout<<"ING. PRIMER FRASE ";
    cin>>n1;
    cout<<"ING. SEGUNDA FRASE ";
    cin>>n2;
    if(strcmp(n1,n2)==0){
        cout<<"AMBOS NOMBRES SON IGUALES";
    }
    if(strcmp(n1,n2)>0){
        cout<<n1<<" ES MAYOR A "<<n2;
    }
    if(strcmp(n1,n2)<0){
        cout<<n1<<" ES MENOR A "<<n2;
    }
    getch();
}

int main()
{
    int op;
    char no[100];
    do{
        system("cls");
        cout<<"\n1.- IMPRIMIR TRIANGULAR";
        cout<<"\n2.- CONTAR VOCALES CONSONANTES Y PALABRAS";
        cout<<"\n3.- COMPARAR";
        cout<<"\n4.- COPIAR CADENA";
        cout<<"\n5.- SALIR";
        cout<<"\n.- ELIJA UNA OPCION ";
        cin>>op;
        switch(op){
            case 1:
                triangular();
                break;
            case 2:
                contador();
                break;
            case 3:
                compara();
                break;
            case 4:
                break;
        }
    }while(op!=5);
    return 0;
}
