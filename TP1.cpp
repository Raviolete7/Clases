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
botella(float , bool , float );
float getcapacidad();
void llenar(float aumentar);
float getocupacion();
void vaciar(float disminuir);
};

botella::botella(float capacidad_total){
capacidad = capacidad_total;
}
botella::botella(float capacidad_total, bool tapa, float ocu){
capacidad = capacidad_total;
tapada = tapa;
ocupacion = ocu;
}
float botella::getcapacidad(){
return capacidad;
}
void botella::llenar(float aumentar){
if(ocupacion+aumentar <= capacidad){
    ocupacion += aumentar;
}
else{ocupacion = capacidad;}

}
float botella::getocupacion(){
return ocupacion;
}
void botella::vaciar(float disminuir){
if(ocupacion-disminuir >= 0){
    ocupacion -= disminuir;
}
else{ocupacion = 0;}

}


int main(){
float capacidad = 600, ocupacion = 200;
botella reg(capacidad, true, ocupacion);
cout<<"Capacidad: "<< reg.getcapacidad();
cout<<"Ocupacion: "<< reg.getocupacion();
float cargar;
cout<<endl<<endl<<"Ingrese cuanto quiere vaciar en la botella: ";
cin>>cargar;
reg.vaciar(cargar);
cout<<endl<<endl<<endl<<"Ocupacion: "<< reg.getocupacion();


return 0;}
