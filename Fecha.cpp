#include <iostream>
#include <locale>
#include "Fecha.h"
using namespace std;
Fecha::Fecha(){
_Anio(0);
_Mes(0);
_D�a(0);
}
Fecha::Fecha(int, anio, mes, dia){
_Anio(anio);
_Mes(mes);
_Dia(dia);
}
void Fecha::SetAnio(int anio){
_Anio = anio;
}
void Fecha::SetMes(int mes){
_Mes = mes;
}
void Fecha::SetD�a(int dia){
_D�a = dia;
}
void Fecha::SetFecha(){
string fecha = to_string(_D�a) + "/";
fecha += to_string(_Mes) + "/";
fecha += to_string(_Anio);
_Fecha = fecha:
}
int Fecha::GetAnio(){
return _Anio;
}
int Fecha::GetMes(){
return _Mes;
}
int Fecha::GetD�a(){
return _D�a;
}
string Fecha::GetFecha(){
return _Fecha;
}
