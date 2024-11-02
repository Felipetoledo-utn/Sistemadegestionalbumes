#include <iostream>
#include <locale>
#include "Cancion.h"
using namespace std;

Cancion::Cancion()
{
_Nombre("Sin nombre");
_Artista("Sin artista");
_Género("Sin género");
_TIempo(0);
_Anio(0);
}

void Cancion::setNombre(string nom){
strcpy(_Nombre, nom.c_str());
}
void Cancion::setArtista(string art){
strcpy(_Artista, art.c_str());
}
void Cancion::setGénero(string gen){
strcpy(_Género, gen.c_str());
}
void Cancion::setTiempo(float tiempo){
_Tiempo = tiempo;
}
void Cancion::setAnio(int anio){
_Anio = anio;
}
string Cancion::GetNombre(){
return _Nombre
}
string Cancion::GetArtista(){
return _Artista;
}
string Cancion::GetGénero(){
return _Género;
}
float Cancion::GetTiempo(){
return _Tiempo;
}
int Cancion::GetAnio(){
return _Anio;
}
string Cancion::ToString{
string can = "| Nombre: " + string(_Nombre);
can += " | Artista: " + string(_Artista);
can += " | Genero: " + string(_Género);
can += " | Duración: " + to_string(_Tiempo);
can += " | Anio: " + to_string (_Anio);
can += " |";
return can;
}
