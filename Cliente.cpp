#include <iostream>
#include <locale>
#include "Cliente.h"
using namespace std;
Cliente::Cliente(){
persona.Persona();
_Mail("Sin mail");
}
Cliente::Cliente(int Dni, string Nom, string Ap, int Anio, int Mes, int Dia, int tel, string mail){
persona.Persona(Dni, Nom, Ap, Anio, Mes, Dia, Tel)
_Mail(mail);
}
void Cliente::SetDNI(int dni){
_DNI = dni;
}
void Cliente::SetNombre(string nombre){
strcpy(_Nombre, nombre.c_str());
}
void Cliente::SetApellido(string apellido){
strcpy(_Apelido, apellido.c_str());
}
void Cliente::SetTelefono(int tel){
_Teléfono = tel;
}
void Cliente::SetMail(string mail){
strcpy(_Mail, mail.c_str());
}
int Cliente::GetDNI(){
return _DNI;
}
string Cliente::GetNombre(){
return _Nombre;
}
string Cliente::GetApellido(){
return _Apellido;
}
void Cliente::SetNacimiento(){
persona.SetFechaNacimiento();
}
string Cliente::GetNacimiento(){
return persona.GetFechaNacimiento();
}
int Cliente::GetTelefono(){
return _Teléfono;
}
string Cliente::GetMail(){
return _Mail;
}
string Cliente::ToString(){
string cliente = "| DNI: " + to_string(_DNI);
cliente += "| Cliente: " + string(_Nombre);
cliente += " " + string(_Apellido);
cliente += "| Fecha de nacimiento: " + to_string(Cliente.GetNacimiento());
cliente += "| Telefono: " + to_string(_Teléfono);
cliente += "| Email: " + string(_Mail);
cliente += "|";
return cliente;
}
