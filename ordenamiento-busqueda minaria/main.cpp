#include <iostream>
#include"Lista.h"
#include "Solicitud.h"
using namespace std;

int main()
{
    int opc;
    Lista Mylist;
    Solicitud X;
    do{
        system("cls");
        cout<<"\n\t MENU DE OPCIONES "<<endl<<endl;
        cout<<"  1. Dar de alta solicitud."<<endl;
        cout<<"  2. Buscar solicitud."<<endl;
        cout<<"  3. Salir."<<endl<<endl;
        cout<<"Elige una opcion: ";
        cin>>opc;

        switch (opc){

            case 1: system("cls");
                    cout<<"\n\tIngrese los datos para la solicitud"<<endl;
                    cin>>X;
                    if(Mylist.Insertar(X)){
                        cout<<"\n"<<endl;
                    }else{
                        cout<<"\nError!, Lista llena."<<endl;
                    }
                    system("pause");
                    break;

            case 2: system("cls");
                    if(Mylist.Vacia()){
                        cout<<"La Lista esta vacia."<<endl;
                    }else{
                        cout<<"\n\tIngresa los datos de la solicitud que deseas buscar: "<<endl;
                        cin>>X;
                            if(Mylist.Buscar(X)>= 0){
                                 cout<<"\n\tla Solicitud fue encontrada!\n\tMostrando todos los datos de la solicitud...\n\n"<<X<<endl<<endl;
                                 cout<<"Tiene el lugar #"<<Mylist.Buscar(X)<<endl<<endl;
                            }else{
                                cout<<"\n la Solicitud no fue encontrada, favor de realizar una."<<endl<<endl;
                            }
                    }
                    system("pause");
                    break;
        }
    }while(opc!=3);
}
