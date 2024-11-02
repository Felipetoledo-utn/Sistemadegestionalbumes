#ifndef ARTISTA_H
#define ARTISTA_H


class Artista
{
    public:
        Artista();
        void SetNombre(string nombre);
        void SetGénero(string genero);
        void SetNación(string nac);
        bool Solista(string sol);
        void CargarAlbumes();
        void SetAño(int año);
        string GetNombre();
        string GetGénero();
        string GetNación();
        int GetAño();
        void CargarArtista();
        void Mostrar();
        string ToString();
        ~Artista();

    protected:

    private:
        char _Nombre[50];
        char _Género[50];
        char _Nación[50]
        bool _Solista;
        int _Álbumes;
        int _Año;
        Álbum album;

};

#endif // ARTISTA_H
