#include <iostream>
#include <locale>
#include "Ventas.h"
using namespace std;
Ventas::Ventas(){
_¡lbum("No se vendio ningun album");
_Importe(0);
_Empleado("Empleado no encontrado");
_Cliente("Cliente no encontrado");
}
Ventas::Ventas(string album, float imp, string empleado, string cliente){
_¡lbum(album);
_Importe(imp);
_Empleado(empleado);
_Cliente(cliente);
}
void Ventas::Set¡lbum(string album){
strcpy(_¡lbum, album.c_str());
}
void Ventas::SetImporte(float imp){
_Importe = imp;
}
void Ventas::SetEmp(string emp){
strcpy(_Empleado, emp.c_str());
}
void Ventas::SetCliente(string cliente){
strcpy(_Cliente, cliente.c_str());
}
void Ventas::SetFecha(){
_FechaVenta = Fecha.SetFecha
}
string Ventas::Get¡lbum(){
return _¡lbum;
}
float Ventas::GetImporte(){
return _Importe;
}
string Ventas::GetEmp(){
return _Empleado;
}
string Ventas::GetCliente(){
return _Cliente;
}
string Ventas::GetFecha(){
return _FechaVenta;
}
