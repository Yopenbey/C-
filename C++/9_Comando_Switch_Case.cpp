#include <iostream>

using namespace std;

int main(){

    /*switch(expressão){

    case const1:
        comandos;
        break;
    case const2;
        comandos;
        break;
    default:
        comandos;

    }
    */

    retorno:

    int val;
    cout <<"Selecione um lanche/doce:\n";
    cout <<"[1]=Coxinha, [2]=Pastel, [3]=Brigadeirro\n";

    cin >> val;

    switch(val){
        case 1:
            cout <<"\nLanche selecionado: Pastel\n";
            cout <<"Boa escolha!\n";
            break;
        case 2:
            cout <<"\nLanche selecionado: Coxinha\n";
            cout <<"Boa escolha\n";
            break;
        case 3:
            cout <<"\nDoce selecionado: Brigadeiro\n";
            cout <<"Boa escolha!\n";
            break;
        default:
            cout <<"\nValor selecionado inválido, tente novamente.\n";
        goto retorno;

    }

    cout<< "\nPrograma Finalizado!\n";

    return 0;
}
