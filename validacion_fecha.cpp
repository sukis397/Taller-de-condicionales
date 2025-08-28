#include<iostream>
using namespace std;

int main(){
	
	int M,D,A,MA;
	
	cout<<"Ingresa tu mes de nacimiento  "; cin>>M;
	cout<<"ingresa tu dia de nacimiento  "; cin>>D;
	cout<<"ingresa tu año de nacimiento "; cin>> A; 
	cout<<"ingresa mes actual  ";cin>>MA;
	if (MA==M){
	if (M==12||M==10||M==8||M==7||M==5||M==3||M==1) {
	    if(D>0 && D<32)
		    cout<<"Aplicar al descuento ";
	    else {
		    cout<<"No aplica al descuento";
	    }
    }
    else if (M==4||M==6||M==9||M==11){
        if (D>0 && D<31)
            cout<<"aplica descuento";
        else {
            cout<<"No aplica al descuento";
        }
    }
    else if (M==2){
        if (D>0 && D<29)
            cout<<"aplica descuento";
        else {
            cout<<"No aplica al descuento";
        }
    }
	}
    else { cout << "Este mes no cumples entonces no hay descuento :(   ";
        
    } 
   
    return 0;
}
