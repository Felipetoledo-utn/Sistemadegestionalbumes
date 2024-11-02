#ifndef CANCION_H
#define CANCION_H


class Cancion
{
    public:
        Cancion();
        void setNombre(string nom);
        void setArtista(string art);
        void setGénero(string gen);
        void setTiempo(float tiempo);
        void setAnio(int anio);
        string GetNombre();
        string GetArtista();
        string GetGénero();
        float GetTiempo();
        int GetAnio();
        string ToString();
    private:
        char _Nombre[50];
        char _Artista[50];
        char _Género [50];
        float _Tiempo;
        int _Anio;

};

#endif // CANCION_H
