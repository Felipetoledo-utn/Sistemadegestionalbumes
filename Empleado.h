#ifndef EMPLEADO_H
#define EMPLEADO_H


class Empleado
{
    public:
        Empleado();
        void SetDNI();
        void SetNombre(string nombre);
        void SetApellido(string apellido);
        void SetNacimiento();
        void SetTelefono(int tel);
        void SetMail(string mail);
        void SetSueldo(float sueldo);
        void SetIngreso();
        int GetDNI();
        string GetNombre();
        string GetApellido();
        string GetNacimiento();
        int GetTelefono();
        string GetMail();
        float GetSueldo();
        string GetIngreso();
        string ToString();
    private:
        char _Nombre[50];
        char _Apellido[50];
        int _DNI;
        int _Teléfono;
        char _Mail[100];
        float _Sueldo;
        string _Ingreso;
        Cliente cliente;
        Persona persona;
        Fecha fecha;
};
#endif // EMPLEADO_H
