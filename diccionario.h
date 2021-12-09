#ifndef DICCIONARIO_H
#define DICCIONARIO_H

#include "nodo_dict.h"

#include "registro_edificios/aserradero.h"
#include "registro_edificios/escuela.h"
#include "registro_edificios/fabrica.h"
#include "registro_edificios/mina.h"
#include "registro_edificios/mina_oro.h"
#include "registro_edificios/obelisco.h"
#include "registro_edificios/planta_electrica.h"

const int ASCII_A = 65;
const int ASCII_E = 69;
const int ASCII_F = 70;
const int ASCII_G = 71;
const int ASCII_M = 77;
const int ASCII_O = 69;
const int ASCII_P = 80;

class Diccionario {
    
    private:
    
    Nodo_dict* origen;

    public:

    //Constructor de dicionario
    Diccionario();

    //Destructor de diccionario
    ~Diccionario();

    // PRE: Recibe un edificio
    // POST: Inserta un edificio en el diccionario
    void agregar_edificio(Edificio* edificio);

    // PRE : Recibe un id entre 2 valores limites, si son edificios,
    // entre 1 y 7 si son materiales, entre ??? y ???
    // POST: devuelve true si el id se está en el diccionario
    Edificio* buscar_edificio(string nombre);

    Edificio* instanciar_edificio(string nombre_edificio, int fila, int columna);

    Edificio* instanciar_edificio(string nombre_edificio, int piedra, int madera, int metal, int limite, int fila, int columna);

    void mostrar_todos_edificios();

    void mostrar_todos_edificios(Nodo_dict* nodo);

    // PRE: -
    // POST: Borra todos los nodos del diccionario
    void borrar_todo();
    
    private:

    int asociar_nombre_id(string nombre_edificio);

    // PRE: Recibe un nodo y el edificio a insertar
    // POST: Ingresa el nodo en su posicion correspondiente
    Nodo_dict* agregar_edificio(Nodo_dict* nodo, Edificio* edificio);

    //PRE: Recibe id y un nodo
    //POST: Devuelve true si el id esta en el diccionacio
    Nodo_dict* buscar(Nodo_dict* nodo, int id);

    // PRE: Recibe el nodo
    // POST: Borra los nodos derechos e izquierdos en cuestion
    void borrar_todo(Nodo_dict* nodo);
};

#endif //DICCIONARIO_H