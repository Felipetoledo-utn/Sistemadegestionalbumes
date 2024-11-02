#ifndef VENTAS_H
#define VENTAS_H


class Ventas
{
    public:
        Ventas();
        void Set¡lbum();
        void SetImporte();
        void SetEmp();
        void SetCliente();
        void SetFecha();
        string Get¡lbum();
        float GetImporte();
        string GetEmp();
        string GetCliente();
        string GetFecha();
        void Cargar();
        void mostrar();
        string ToString();
    private:
    char _¡lbum[50];
    float _Importe;
    char _Empleado[50];
    char _Cliente[50];
    string _FechaVenta;
    Fecha Fecha;

};

#endif // VENTAS_H
