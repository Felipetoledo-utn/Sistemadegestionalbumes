#ifndef ARTISTA_H
#define ARTISTA_H


class Artista
{
    public:
        Artista();
        void SetNombre(string nombre);
        void SetG�nero(string genero);
        void SetNaci�n(string nac);
        bool Solista(string sol);
        void CargarAlbumes();
        void SetA�o(int a�o);
        string GetNombre();
        string GetG�nero();
        string GetNaci�n();
        int GetA�o();
        void CargarArtista();
        void Mostrar();
        string ToString();
        ~Artista();

    protected:

    private:
        char _Nombre[50];
        char _G�nero[50];
        char _Naci�n[50]
        bool _Solista;
        int _�lbumes;
        int _A�o;
        �lbum album;

};

#endif // ARTISTA_H
