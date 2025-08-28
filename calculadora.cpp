#include<iostream>
using namespace std;

int main(){
int prod,vip;
cout<<"¿Actualmente es cliente vip? SI(1) NO(0) "; cin>>vip;
cout<<"¿Cuantos productos lleva? "; cin>>prod;
if(prod<0){
cout<<"No aplica ningun descuento existente";
}else if(vip==1){
cout<<"Aplica descuenta del 20% de descuento";
}else if(prod>=4){
cout<<"Aplica un descuento del 10% de descuento";
}else{
cout<<"No aplica descuento";
}
return 0;
}
