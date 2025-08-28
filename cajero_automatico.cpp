#include<iostream>
using namespace std;

int main(){
    int pin, valor = 1000000, retiro;
    cout<<"Ingrese su pin de 4 digitos: ";cin>>pin;
    if(pin==9312){
        int op;
        cout<<"Has accedido satisfactoriamente a tu cuenta";
        cout<<"\nTu saldo actual: $"<<valor;
        cout<<"\n1)Retirar \n2)Salir \nEscoge una opcion: ";cin>>op;
        if(op==1){
            cout<<"¿Cuanto deseas retirar?";cin>>retiro;
            if(retiro>1000001){
                cout<<"No es posible retirar un valor encima del disponible, cerrando sesion";
            }else if(retiro<1){
                cout<<"No es posible retirar un valor negativo, cerrando sesion";
            }else{
                valor = valor-retiro;
                cout<<"Procesando retiro\n Retiro exitoso\n Tu saldo restante: $"<<valor;
                cout<<"\nGracias por preferirnos, hasta luego";
            }

        }else{
            cout<<"Terminando sesion";
        }
    }else{
        cout<<"Pin incorrecto. Sesion expirada";
    }


    return 0;
}
