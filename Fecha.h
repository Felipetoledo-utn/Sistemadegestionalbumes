#ifndef FECHA_H
#define FECHA_H


class Fecha
{
    public:
    Fecha();
    Fecha(int, anio, mes, dia);
    int GetAnio();
    int GetMes();
    int GetDía();
    string GetFecha();
    void SetAnio(int anio);
    void SetMes(int mes);
    void SetDía(int dia);
    void SetFecha();
    private:
    int _Anio;
    int _Mes;
    int _Día;
    string _Fecha;
};

#endif // FECHA_H
