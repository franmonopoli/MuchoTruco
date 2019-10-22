#ifndef EQUIPO_H
#define EQUIPO_H


class Equipo
{
    private:
    //ATRIBUTOS
        string nombre;
        int cantidad_de_Puntos;

    public:
    //CONSTRUCTORES
        Equipo();

        Equipo(string n);

    //METODOS
        void set_puntos(int p);
        void set_nombre(string n);

        int get_puntos();
        string get_nombre();
};

#endif // EQUIPO_H
