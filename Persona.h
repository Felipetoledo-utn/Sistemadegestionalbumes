#ifndef PERSONA_H
#define PERSONA_H
#include "Persona.h"

class Persona
{
    public:
        Persona();
        Persona(int dni, string nom, string ap, int anio, int mes, int dia, int tel)
        void SetDNI();
        void SetNombre(string nombre);
        void SetApellido(string apellido);
        void SetTelefono(int tel);
        void SetFechaNacimiento()
        int GetDNI();
        string GetNombre();
        string GetApellido();
        int GetTelefono;
        void GetFechaNacimiento();
        ~Persona();

    protected:

    private:
        int _DNI;
        char _Nombre[50];
        char _Apellido[50];
        Fecha fechaNacimiento;
        int _Telefono;
};

#endif // PERSONA_H
