#include "nodo.h"

const int PRIMERA_FILA = 1;
const int PRIMERA_COLUMNA = 1;

Nodo::Nodo(Vertice* vertice){
    
    this -> vertice = vertice;
    adyacente_arriba = nullptr;
    adyacente_abajo = nullptr;
    adyacente_izquierdo = nullptr;
    adyacente_derecho = nullptr;

}

void Nodo::asignar_abajo(Vertice* vertice_abajo){
    this -> adyacente_abajo = vertice_abajo;
}

void Nodo::asignar_arriba(Vertice* vertice_arriba){
    this -> adyacente_arriba = vertice_arriba;
}

void Nodo::asignar_derecho(Vertice* vertice_derecho){
    this -> adyacente_derecho = vertice_derecho;
}

void Nodo::asignar_izquierdo(Verice* vertice_izquierdo){
    this -> adyacente_izquierdo = vertice_izquierdo;
}

Nodo::~Nodo() {
    delete vertice;
}

    /*
    //inicializar variables del vertice
    int numero_vertice = vertice -> obtener_vertice();
    int filas = vertice -> obtener_fila();
    int columnas = vertice -> obtener_columna();
    int posicion_x = vertice -> obtener_posicion_x();
    int posicion_y = vertice -> obtener_posicion_y();

    //asignar adyacentes
    if (posicion_x == PRIMERA_FILA){
        adyacente_arriba = nullptr;
    }

    else if(posicion_x == filas){
        adyacente_abajo = nullptr;
    }
    
    if (posicion_y == PRIMERA_COLUMNA){
        adyacente_izquierdo = nullptr;
    }
    */
 