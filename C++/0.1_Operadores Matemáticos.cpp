#include <iostream>
using namespace std;
    //variavel global pode ser usada em qualquer lugar do programa;
    //variavel local só pode ser usada dentro da função a qual foi declarada;

int n1,n2;//variáveis globais

int main(){

    //operadores matemáticos: * / + - % ()

    int n1,n2,n3,n4; //variáveis Locais
    int res;

    n1=11;
    n2=3;
    n3=5;
    n4=2;

    res = (n1+n2+n3+n4)-10;

    cout <<"Soma de todas as variáveis: " << res << "\n\n";

    return 0;
}
