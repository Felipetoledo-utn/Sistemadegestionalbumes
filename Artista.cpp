#include <iostream>
#include <locale>
#include "Artista.h"
using namespace std;

Artista::Artista(){
_Nombre("Sin nombre");
_G�nero("Sin Genero");
_Naci�n("Sin nacion");
_�lbumes(0);
_A�o(0)
}
void Artista::SetNombre(string nombre){
strcpy(_Nombre, nombre.c_str());
}
void Artista::SetG�nero(string genero){
strcpy(_G�nero, genero.c_str());
}
void Artista::SetNaci�n(string nac){
strcpy(_Naci�n, nac.c_str());
}
bool Artista::Solista(string sol){
if(sol = "si" || sol = "Si"){
    return true;
}
else if (sol = "no" || sol = "No"){
    return false;
}
}
void Artista::SetA�o(int a�o){
_A�o = a�o;
}
string Artista::GetNombre(){
return _Nombre;
}
string Artista::GetG�nero(){
return _G�nero;
}
string Artista::GetNaci�n(){
return _Naci�n;
}
int Artista::GetA�o(){
return _A�o;
}






string Artista::ToString(){
string art = "| Artista: " + string(_Nombre);
art += "| Genero: " + string(_G�nero);
art += "| Nacionalidad: " + string(_Naci�n);
art += "| Solista: " + to_string(_Solista);
art += "| Anio de salida: " + to_string(_A�o);
art += " |";
return art;
}
