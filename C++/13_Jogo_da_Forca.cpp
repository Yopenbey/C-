#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    char palavra[30], letra[1],secreta[30];
    int tam,i,chances,acertos;
    bool acerto;

    chances=6;
    tam=0;
    i=0;
    acerto=false;
    acertos=0;

    cout << "Fale para seu amigo tampar os olhos e digite a palavra secreta: ";
    cin >> palavra;
    system("clear");

    while(palavra[i] != '\0'){
        i++;
        tam++;
    }

    for(i=0;i<30;i++){
        secreta[i]='-';

    }

    while((chances > 0)&&(acertos<tam)){
        cout << "Chances Restantes: " << chances << "\n\n";
        cout <<"Palavra Secreta: ";
        for(i=0;i<tam;i++){
            cout <<secreta[i];
        }
        cout << "\n\nDigite uma Letra: ";
        cin>> letra[0];
        for(i=0; i<tam; i++){
            if(palavra[i]==letra[0]){
            acerto=true;
            secreta[i]=palavra[i];
            acertos++;
           }

       }
       if(!acertos){
        chances--;
       }
       acertos=false;
       system("clear");

    }

    if(acertos==tam){
        cout <<"Parabéns, você venceu!!";
    }else{
        cout <<"Que pena, você perdeu";

    }

    system("pause");
    return 0;
}
