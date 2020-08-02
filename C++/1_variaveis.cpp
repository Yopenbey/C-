#include <iostream>

using namespace std;

int main(){

    //TIPO NOME;
    //TIPO NOME = VALOR;

    int vidas=0; //10, 25
    char letra='D';//'D'
    double Decimal=5.2;//2,499999999
    float decimal2=5.2;//Precisão menor; 2,5
    bool vivo=true;//true(1) //false(0)
    string nome="Daniel";//"Daniel"

    cout << "Digite o numero de vidas:";
    cin >> vidas;
    cout << "Digite uma letra:";
    cin >> letra;
    cout << "Dinheiro: ";
    cin >> Decimal;
    cout << "Digite seu nome: ";
    cin >> nome;


    cout <<"\nVidas: "<< vidas <<"\n";
    cout <<"\nLetra: " << letra <<"\n";
    cout <<"\nDinheiro: " << Decimal<<"\n";
    cout <<"\nVivo: "<<vivo<<"\n";
    cout <<"\nNome: "<<nome <<"\n";

    return 0;
}
