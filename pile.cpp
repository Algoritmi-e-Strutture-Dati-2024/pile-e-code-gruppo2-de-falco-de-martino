#include <iostream>
#include "ListaPuntatori.cpp"  // richiamo al codice della scorsa lezione per riutilizzare la classe lista puntatori

template <typename T>
class Pila {
private:
    ListaPuntatori<T> lista;  

public:
// Aggiunge un elemento alla cima della pila
    void push(T elem) {
        lista.inslista(elem, 1);  // Inserisce l'elemento in cima alla pila
    }

// Rimuove e restituisce l'elemento in cima alla pila
    T pop() {
        if (isEmpty()) {
            std::cout << "Errore: la pila è vuota." << std::endl;
            return T();  // Ritorna un valore void 
        }

        T topElem = lista.leggilista(1);  // Legge l'elemento in cima alla pila
        lista.canclista(1);  // Rimuove l'elemento in cima 
        return topElem;
    }

// Restituisce l'elemento in cima alla pila senza rimuoverlo
    T top() {
        if (isEmpty()) {
            std::cout << "Errore: la pila è vuota." << std::endl;
            return T();  // Ritorna un valore void 
        }
        return lista.leggilista(1);  // Legge l'elemento in cima alla pila
    }

// Restituisce true se la pila è vuota, altrimenti false
    bool isEmpty() const {
        return lista.listavuota();
    }

// Restituisce il numero di elementi nella pila
    int size() const {
        return lista.lunghezza();
    }
};
