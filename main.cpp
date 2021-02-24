#include <iostream>
#include "Lista.h"
using std::cout, std::endl;

void pruebasNodos();
void pruebasListas();

bool Comparar(const Nodo *nodo1, const Nodo *nodo2);

int main()
{
//    pruebasNodos();
    pruebasListas();
    return 0;
}

void pruebasNodos()
{
    Nodo* nodo2 = CrearUltimoNodo(2);
    Nodo* nodo1 = CrearNodo(1, nodo2);
    cout << "MOSTRANDO ITEMS" << endl;
    MostrarItem(nodo1);
    MostrarItem(nodo2);
    cout << "MOSTRANDO EL ITEM DEL NODO SIGUIENTE AL NODO 1" << endl;
    MostrarItemSiguiente(nodo1);
    cout << "COMPARAR NODOS" << endl;
    Comparar(nodo1, nodo1);
    Comparar(nodo1, nodo2);
    BorrarNodo(nodo1);
    BorrarNodo(nodo2);
}

void pruebasListas()
{
    Lista* lista0 = CrearListaVacia();
    MostrarLista(lista0);
    BorrarLista(lista0);
    // ------------------------------------
    Nodo* nodo0 = CrearUltimoNodo(0);
    Lista* lista1 = CrearLista(nodo0);
    MostrarLista(lista1);
    // AGREGANDO AL FINAL
    Nodo* nodo1 = CrearUltimoNodo(1);
    AgregarAlFinal(lista1, nodo1);
    MostrarLista(lista1);
    Nodo* nodo2 = CrearUltimoNodo(2);
    AgregarAlFinal(lista1, nodo2);
    MostrarLista(lista1);
    // QUITANDO NODO
    Quitar(lista1, nodo2);
    MostrarLista(lista1);



    BorrarLista(lista1);
}

bool Comparar(const Nodo *nodo1, const Nodo *nodo2)
{
    bool bReturn = false;
    if(SonIguales(nodo1, nodo2))
    {
        cout << "IGUALES" << endl;
        bReturn = true;
    }
    else
        cout << "DISTINTOS" << endl;
    return bReturn;
}
