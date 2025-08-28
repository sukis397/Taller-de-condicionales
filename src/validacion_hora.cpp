#include<iostream>
using namespace std;
int main(){
int hor, min;
cout<<"Ingrese hora de entrada"; cin>>hor;
cout<<"Ingrese minuto de entrada"; cin>>min;
if(hor>=0&&hor<=23){
if(min>=0&&min<=59){cout<<"Hora registrada correctamente: "<<hor<<":"<<min;
}else{
cout<<"No se encuentra en el rango";
}
}else{
cout<<"No se encuentra en el rango";
}
return 0;
}
