#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack <string> cartas;

     while(!cartas.empty()){
        cartas.pop();

    }

    cout<<"Baralho vazio\n\n";

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    if(cartas.empty()){
        cout << "Pilha vazia\n\n";
    }else{
        cout << "Adicionando Cartas...\n\n";
        cout << "Baralho com cartas\n\n";
    }

    cout << "Tamanho da pilha: " << cartas.size() <<"\n";

    cout << "Carta do topo: " << cartas.top()<<"\n";

    cartas.pop();
    cartas.pop();

    cout << "Nova carta do topo: " << cartas.top() << "\n";



    return 0;
}

