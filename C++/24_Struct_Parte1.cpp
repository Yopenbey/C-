#include <iostream>

using namespace std;

struct Carro{

    string nome;
    string cor;
    int pot;
    int velMax;

};


int main(){

    Carro car1;
    Carro car2;

    car1.nome="Tornado";
    car1.cor="Vermelho";
    car1.pot=450;
    car1.velMax=350;

    car2.nome="Fusca";
    car2.cor="Amarelo";
    car2.pot=800;
    car2.velMax=900;

    cout<< "Nome.............: " << car1.nome << "\n";
    cout<< "Cor..............: " << car1.cor << "\n";
    cout<< "Potência.........: " << car1.pot << "\n";
    cout<< "Velocidade Máxima: " << car1.velMax << "\n";

    cout<< "\nNome.............: " << car2.nome << "\n";
    cout<< "Cor..............: " << car2.cor << "\n";
    cout<< "Potência.........: " << car2.pot << "\n";
    cout<< "Velocidade Máxima: " << car2.velMax << "\n";

    return 0;
}
