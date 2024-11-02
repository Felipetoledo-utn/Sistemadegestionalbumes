#ifndef FECHA_H
#define FECHA_H


class Fecha
{
    public:
    Fecha();
    Fecha(int, anio, mes, dia);
    int GetAnio();
    int GetMes();
    int GetD�a();
    string GetFecha();
    void SetAnio(int anio);
    void SetMes(int mes);
    void SetD�a(int dia);
    void SetFecha();
    private:
    int _Anio;
    int _Mes;
    int _D�a;
    string _Fecha;
};

#endif // FECHA_H
