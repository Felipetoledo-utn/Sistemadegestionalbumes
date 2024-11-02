#ifndef CANCION_H
#define CANCION_H


class Cancion
{
    public:
        Cancion();
        void setNombre(string nom);
        void setArtista(string art);
        void setG�nero(string gen);
        void setTiempo(float tiempo);
        void setAnio(int anio);
        string GetNombre();
        string GetArtista();
        string GetG�nero();
        float GetTiempo();
        int GetAnio();
        string ToString();
    private:
        char _Nombre[50];
        char _Artista[50];
        char _G�nero [50];
        float _Tiempo;
        int _Anio;

};

#endif // CANCION_H
