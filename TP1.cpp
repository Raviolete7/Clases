#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

class botella{
private:
float capacidad;
float ocupacion;
bool tapada;

public:
botella(float );
botella();
float getcapacidad();
void llenar(float aumentar);
float getocupacion();
void vaciar(float disminuir);
void vaciar();
void destapar();
bool gettapada();
float getdisponibilidad();
void llenar();
};

botella::botella(float capacidad_total){
capacidad = capacidad_total;
ocupacion = 0;
}

botella::botella(){
capacidad = 100;
ocupacion = 0;


}


float botella::getcapacidad(){
return capacidad;
}

void botella::llenar(float aumentar){
if(tapada==false){
if(ocupacion+aumentar <= capacidad){
    ocupacion += aumentar;
}
else{ocupacion = capacidad;}

}}

float botella::getocupacion(){
return ocupacion;
}

void botella::vaciar(float disminuir){
if(tapada==false){
if(ocupacion-disminuir >= 0){
    ocupacion -= disminuir;
}
else{ocupacion = 0;}

}}

void botella::vaciar(){
if(tapada==false){
ocupacion = 0;

}}

void botella::destapar(){
    if(tapada==true){
    tapada = false;
}}

bool botella::gettapada(){
return tapada;
}

float botella::getdisponibilidad(){
float disponibilidad = capacidad - ocupacion;
return disponibilidad;

}

void botella::llenar(){
if(tapada==false){
ocupacion = capacidad;
}}

int main(){

float capacidad = 600, ocupacion = 200;

botella reg(500);
reg.llenar();
cout<<"Capacidad: "<< reg.getcapacidad();
cout<<"Ocupacion: "<< reg.getocupacion();
cout<<"Disponibilidad: "<< reg.getdisponibilidad();
float cargar;
cout<<endl<<endl<<"Ingrese cuanto quiere vaciar en la botella: ";
cin>>cargar;
reg.vaciar(cargar);
cout<<endl<<endl<<endl<<"Ocupacion: "<< reg.getocupacion();
reg.vaciar();
cout<<endl<<endl<<endl<<"Ocupacion: "<< reg.getocupacion();
cout<<"Estado de la botella: "<< reg.gettapada();
reg.destapar();
cout<<"Estado de la botella: "<< reg.gettapada();
cout<<"Disponibilidad: "<< reg.getdisponibilidad();
return 0;}
