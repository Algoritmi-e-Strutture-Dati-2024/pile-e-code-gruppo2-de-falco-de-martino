#include <iostream>
#include "ListaPuntatori.cpp"  
#include "Pila.cpp"           
#include "Coda.cpp"           

int main() {
// Test della Pila
    Pila<int> pilaInt;
    
// Inserisce alcuni elementi nella lista di interi
    pilaInt.push(20);
    pilaInt.push(40);
    pilaInt.push(60);
    
// Stampa e rimuovi gli elementi dalla pila
    std::cout << "Elemento in cima alla pila: " << pilaInt.top() << std::endl;
    std::cout << "Rimuovo: " << pilaInt.pop() << std::endl;
    std::cout << "Nuovo elemento in cima alla pila dopo pop: " << pilaInt.top() << std::endl;
    std::cout << "Dimensione della pila: " << pilaInt.size() << std::endl;

// Test della Coda
    Coda<int> codaInt;
    
// Inserisce alcuni elementi nella lista di interi    
    codaInt.enqueue(100);
    codaInt.enqueue(300);
    codaInt.enqueue(500);
    
// Stampa e rimuovi gli elementi dalla coda
    std::cout << "Elemento in testa alla coda: " << codaInt.front() << std::endl;
    std::cout << "Rimuovo dalla coda: " << codaInt.dequeue() << std::endl;
    std::cout << "Nuovo elemento in testa alla coda dopo dequeue: " << codaInt.front() << std::endl;
    std::cout << "Dimensione della coda: " << codaInt.size() << std::endl;

    return 0;
}
