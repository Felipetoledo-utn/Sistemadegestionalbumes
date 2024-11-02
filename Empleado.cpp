#include <iostream>
#include <locale>
#include "Empleado.h"
using namespace std;
Empleado::Empleado(){
Cliente.Cliente();
_Sueldo(0);
_Ingreso("Sin Ingreso");
}
Empleado::Empleado(int Dni, string Nom, string Ap, int Anio, int Mes, int Dia, int tel, string mail, float sueldo){
cliente.Cliente(Dni, Nom, Ap, Anio, Mes, Dia, tel, mail);
_Sueldo(sueldo);
fecha.SetFecha(Anio, Mes, Dia);
_Ingreso(fecha.GetFecha())
}
void Empleado::SetDNI(int dni){
_DNI = dni;
}
void Empleado::SetNombre(string nombre){
strcpy(_Nombre, nombre.c_str());
}
void Empleado::SetApellido(string apellido){
strcpy(_Apelido, apellido.c_str());
}
void Empleado::SetNacimiento(){
Persona.SetFechaNacimiento();
}
void Empleado::SetTelefono(int tel){
_Teléfono = tel;
}
void Empleado::SetMail(string mail){
strcpy(_Mail, mail.c_str());
}
void Empleado::SetSueldo(float sueldo){
_Sueldo = sueldo;
}
void Empleado::SetIngreso(){
_Ingreso = Persona.GetFechaNacimiento();
}
int Empleado::GetDNI(){
return _DNI;
}
string Empleado::GetNombre(){
return _Nombre;
}
string Empleado::GetApellido(){
return _Apellido;
}
string Empleado::GetNacimiento(){
return persona.GetFechaNacimiento();
}
int Empleado::GetTelefono(){
return _Teléfono;
}
string Empleado::GetMail(){
return _Mail;
}
float Empleado::GetSueldo(){
return _Sueldo;
}
string Empleado::GetIngreso(){
return persona.GetFechaNacimiento();
}
string Empleado::ToString(){
string emp = "| DNI: " + to_string(_DNI);
emp += "| Empleado: " + string(_Nombre);
emp += " " + string(_Apellido);
emp += "| Fecha de nacimiento: " + string(Empleado.GetNacimiento());
emp += "| Telefono: " + to_string(_Teléfono);
emp += "| Gmail: " + string(_Mail);
emp += "| Sueldo: " + to_string(_Sueldo);
emp += "| Fecha de ingreso: " + string(Empleado.GetIngreso);
return emp;
}
