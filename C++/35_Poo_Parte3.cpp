#include <iostream>
#include "classes.h"

using namespace std;

int main(){

    Veiculo *v1=new Veiculo(1);
    Veiculo *v2=new Veiculo(2);
    Veiculo *v3=new Veiculo(3);

    v1->setLigado(0);
    v2->setLigado(1);
    //v3->setLigado(1);

    cout << v1->getVelMax() << endl;
    cout << v2->getVelMax() << endl;
    cout << v3->getVelMax() << endl;

    if(v1->getLigado()){
        cout << "Veiculo 1 está ligado!" << endl;
    }else{
        cout << "Veiculo 1 está desligado!" << endl;
    }

    if(v2->getLigado()){
        cout << "Veiculo 2 está ligado!" << endl;
    }else{
        cout << "Veiculo 2 está desligado!" << endl;
    }

    if(v3->getLigado()){
        cout << "Veiculo 3 está ligado!" << endl;
    }else{
        cout << "Veiculo 3 está desligado!" << endl;
    }


    return 0;
}
