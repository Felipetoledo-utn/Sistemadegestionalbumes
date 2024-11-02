#include <iostream>
#include <locale>
#include "Persona.h"
#include "Fecha.h"
#include "Fecha.cpp"
using namespace std;
Persona::Persona(){
_DNI(0);
_Nombre("Sin Nombre");
_Apellido("Sin Apellido");
_Fecha("Sin Nacimiento");
_Telefono(0);
}
Persona::Persona(int dni, string nom, string ap, int anio, int mes, int dia, int tel){
_DNI(dni);
_Nombre(nom);
_Apellido(ap);
fechaNacimiento.Fecha(anio, mes, dia);
_Telefono(tel);
}
void Persona::SetDNI(int dni){
_DNI = dni;
}
void Persona::SetNombre(string nombre){
strcpy(_Nombre, nombre.c_str());
}
void Persona::SetApellido(string apellido){
strcpy(_Apellido, apellido.c_str());
}
void Persona::SetTelefono(int tel){
_Telefono = tel;
}
void Persona::SetFechaNacimiento(int anio, int mes, int dia){
cout << "Ingrese el año de nacimiento: ";
cin >> anio;
fechaNacimiento.SetAnio(anio);
cout << "Ingrese el mes de nacimiento: ";
cin >> mes;
fechaNacimiento.SetMes(mes);
cout << "Ingrese el día de nacimiento: ";
cin >> dia;
fechaNacimiento.SetDía(dia);
fechaNacimiento.SetFecha();
}
int Persona::GetDNI(){
return _DNI
}
string Persona::GetNombre(){
return _Nombre;
}
string Persona::GetApellido(){
return _Apellido;
}
int Persona::GetTelefono(){
return _Telefono;
}
void Persona::GetFechaNacimiento(){
fechaNacimiento.GetFecha();
}







