#include <iostream>
#include <locale>
#include "Artista.h"
using namespace std;

Artista::Artista(){
_Nombre("Sin nombre");
_Género("Sin Genero");
_Nación("Sin nacion");
_Álbumes(0);
_Año(0)
}
void Artista::SetNombre(string nombre){
strcpy(_Nombre, nombre.c_str());
}
void Artista::SetGénero(string genero){
strcpy(_Género, genero.c_str());
}
void Artista::SetNación(string nac){
strcpy(_Nación, nac.c_str());
}
bool Artista::Solista(string sol){
if(sol = "si" || sol = "Si"){
    return true;
}
else if (sol = "no" || sol = "No"){
    return false;
}
}
void Artista::SetAño(int año){
_Año = año;
}
string Artista::GetNombre(){
return _Nombre;
}
string Artista::GetGénero(){
return _Género;
}
string Artista::GetNación(){
return _Nación;
}
int Artista::GetAño(){
return _Año;
}






string Artista::ToString(){
string art = "| Artista: " + string(_Nombre);
art += "| Genero: " + string(_Género);
art += "| Nacionalidad: " + string(_Nación);
art += "| Solista: " + to_string(_Solista);
art += "| Anio de salida: " + to_string(_Año);
art += " |";
return art;
}
