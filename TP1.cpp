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

};

botella::botella(float capacidad_total){
capacidad = capacidad_total;
}
botella::botella(float capacidad_total, bool tapa, float ocu){
capacidad = capacidad_total;
tapada = tapa;
ocupacion = ocu;
}


int main(){
botella reg(600, true, 200);


return 0;}
