#ifndef CLIENTE_H
#define CLIENTE_H


class Cliente
{
    public:
        Cliente();
        Cliente(int Dni, string Nom, string Ap, int Anio, int Mes, int Dia, int tel, string mail);
        void SetDNI();
        void SetNombre(string nombre);
        void SetApellido(string apellido);
        void SetNacimiento();
        void SetTelefono(int tel);
        void SetMail(string mail);
        int GetDNI();
        string GetNombre();
        string GetApellido();
        string GetNacimiento();
        int GetTelefono();
        string GetMail();
        string ToString();
    private:
        char _Nombre[50];
        char _Apellido[50];
        int _DNI;
        int _Teléfono;
        char _Mail[100];
        Persona persona;
        Fecha fecha;
};

#endif // CLIENTE_H
