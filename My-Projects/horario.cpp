#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;


int main(){

    int dia;
    int vez1, vez2,vez3,vez4,vez5,vez6,vez7;
    char opc='s';
    char opc2='s';
    char opc3='s';
    char opc4='s';
    char opc5='s';
    char opc6='s';
    char opc7='s';
    string nome,linha;
    fstream arquivo;


    cout << "\n\n-----------------------------Horários de Estudo-------------------------------\n";
    cout <<"\nOlá, você já montou o seu horário?\n";
    cout <<"\n[1]=Sim  [2]=Não, Informe o número:  ";
    cin >> vez1;


    switch (vez1){
        case 2:
                {
            cout<< "\nEntão vamos criá-lo!\n";
            cout <<"-----------------------------------------------------------------------------";

            arquivo.open("segunda-feira.txt", ios::out|ios::app);
            while((opc=='s')or(opc=='S')){
                cout << "\nA seguir, informe tudo o que você pretende estudar na segunda-feira(4 nomes): \n" << endl;
                cin >> nome;
                arquivo << nome <<  endl;
                cin >> nome;
                arquivo << nome << endl;
                cin >> nome;
                arquivo << nome << endl;
                cin >> nome;
                arquivo << nome << endl;
                cout << "\nMais alguma? [s/n]: ";
                cin >> opc;
                system("clear");
                }
                arquivo.close();

                arquivo.open("segunda-feira.txt", ios::in);

                cout << "\nAulas informadas: " << endl;

                if(arquivo.is_open()){
                    while(getline(arquivo,linha)){
                        cout << linha << endl;
                }
                    arquivo.close();
                    system("clear");


                }else{
                    cout << "Não foi possível abrir o arquivo" << endl;
                }
            }
                cout << "\nDeseja continuar para a terça-feira? [1]=Sim, [2]=Não: ";
                cin >> vez2;//Diferente

              switch(vez2){
                 case 1:
                 {
                    arquivo.open("terça-feira.txt", ios::out|ios::app);
                    while((opc2=='s')or(opc2=='S'))/*Diferente*/{
                        cout << "\nA seguir, informe tudo o que você pretende estudar na terça-feira(4 nomes): \n" << endl;
                        cin >> nome;
                        arquivo << nome << endl;
                        cin >> nome;
                        arquivo << nome << endl;
                        cin >> nome;
                        arquivo << nome << endl;
                        cin >> nome;
                        arquivo << nome << endl;
                        cout << "\nMais alguma? [s/n]";
                        cin >> opc2;//Diferente
                        system("clear");
                }
                    arquivo.close();

                    arquivo.open("terça-feira.txt", ios::in);

                    cout << "\nAulas informadas: " << endl;

                    if(arquivo.is_open()){
                        while(getline(arquivo,linha)){
                            cout << linha << endl;
                    }
                        arquivo.close();
                        system("clear");

                }else{
                        cout << "Não foi possível abrir o arquivo" << endl;
                   }
                break;
                }
                case 2:
                {
                    exit(0);
                }
            }
              cout << "\nDeseja continuar para a quarta-feira? [1]=Sim, [2]=Não: ";
              cin >> vez3;//Diferente

              switch(vez3){
                 case 1:
                 {
                    arquivo.open("quarta-feira.txt", ios::out|ios::app);
                    while((opc3=='s')or(opc3=='S'))/*Diferente*/{
                        cout << "\nA seguir, informe tudo o que você pretende estudar na quarta-feira: \n" << endl;
                        cin >> nome;
                        arquivo << nome << endl;
                        cin >> nome;
                        arquivo << nome << endl;
                        cin >> nome;
                        arquivo << nome << endl;
                        cin >> nome;
                        arquivo << nome << endl;
                        cout << "\nMais alguma? [s/n]";
                        cin >> opc3;
                        system("clear");
                    }
                    arquivo.close();

                    arquivo.open("quarta-feira.txt", ios::in);

                    cout << "\nAulas informadas: " << endl;

                    if(arquivo.is_open()){
                            while(getline(arquivo,linha)){
                                    cout << linha << endl;
                    }
                            arquivo.close();
                            system("clear");

                    }else{
                            cout << "Não foi possível abrir o arquivo" << endl;
                    }
                 break;
                }
                 case 2:
                 {
                    exit(0);
                 }
             }
                cout << "\nDeseja continuar para a quinta-feira? [1]=Sim, [2]=Não: ";
                cin >> vez4;//Diferente

                switch(vez4){
                  case 1:
                    {
                        arquivo.open("quinta-feira.txt", ios::out|ios::app);
                        while((opc4=='s')or(opc4=='S'))/*Diferente*/{
                                cout << "\nA seguir, informe tudo o que você pretende estudar na quinta-feira: \n" << endl;
                                cin >> nome;
                                arquivo << nome << endl;
                                cin >> nome;
                                arquivo << nome << endl;
                                cin >> nome;
                                arquivo << nome << endl;
                                cin >> nome;
                                arquivo << nome << endl;
                                cout << "\nMais alguma? [s/n]";
                                cin >> opc4;
                                system("clear");
                    }
                    arquivo.close();

                    arquivo.open("quinta-feira.txt", ios::in);

                    cout << "\nAulas informadas: " << endl;

                    if(arquivo.is_open()){
                            while(getline(arquivo,linha)){
                                cout << linha << endl;
                }
                    arquivo.close();
                    system("clear");

                }else{
                        cout << "Não foi possível abrir o arquivo" << endl;
                  }
                 break;
                }
                 case 2:
                 {
                    exit(0);
                 }
             }
                cout << "\nDeseja continuar para a sexta-feira? [1]=Sim, [2]=Não: ";
                cin >> vez5;//Diferente

                switch(vez5){
                    case 1:
                    {
                    arquivo.open("sexta-feira.txt", ios::out|ios::app);
                    while((opc5=='s')or(opc5=='S'))/*Diferente*/{
                            cout << "\nA seguir, informe tudo o que você pretende estudar na sexta-feira: \n" << endl;
                            cin >> nome;
                            arquivo << nome << endl;
                            cin >> nome;
                            arquivo << nome << endl;
                            cin >> nome;
                            arquivo << nome << endl;
                            cin >> nome;
                            arquivo << nome << endl;
                            cout << "\nMais alguma? [s/n]";
                            cin >> opc5;
                            system("clear");
                    }
                    arquivo.close();

                    arquivo.open("sexta-feira.txt", ios::in);

                    cout << "\nAulas informadas: " << endl;

                    if(arquivo.is_open()){
                        while(getline(arquivo,linha)){
                            cout << linha << endl;
                }
                    arquivo.close();
                    system("clear");

                }else{
                        cout << "Não foi possível abrir o arquivo" << endl;
                  }
                break;
             }
                 case 2:
                {
                exit(0);
                }
             }
                cout << "\nDeseja continuar para o sábado? [1]=Sim, [2]=Não: ";
                cin >> vez6;//Diferente

                switch(vez6){
                   case 1:
                   {
                     arquivo.open("sabado.txt", ios::out|ios::app);
                     while((opc6=='s')or(opc6=='S'))/*Diferente*/{
                            cout << "\nA seguir, informe tudo o que você pretende estudar no sábado: \n" << endl;
                            cin >> nome;
                            arquivo << nome << endl;
                            cin >> nome;
                            arquivo << nome << endl;
                            cin >> nome;
                            arquivo << nome << endl;
                            cin >> nome;
                            arquivo << nome << endl;
                            cout << "\nMais alguma? [s/n]";
                            cin >> opc6;
                            system("clear");
                    }
                    arquivo.close();

                    arquivo.open("sabado.txt", ios::in);

                    cout << "\nAulas informadas: " << endl;

                    if(arquivo.is_open()){
                        while(getline(arquivo,linha)){
                            cout << linha << endl;
                }
                    arquivo.close();
                    system("clear");

                }else{
                        cout << "Não foi possível abrir o arquivo" << endl;
                }
                break;
            }
                case 2:
                {
                    exit(0);
                }
             }
                cout << "\nDeseja continuar para o domingo? [1]=Sim, [2]=Não: ";
                cin >> vez7;//Diferente

                switch(vez7){
                   case 1:
                   {
                     arquivo.open("domingo.txt", ios::out|ios::app);
                     while((opc7=='s')or(opc7=='S'))/*Diferente*/{
                            cout << "\nA seguir, informe tudo o que você pretende estudar no domingo: \n" << endl;
                            cin >> nome;
                            arquivo << nome << endl;
                            cin >> nome;
                            arquivo << nome << endl;
                            cin >> nome;
                            arquivo << nome << endl;
                            cin >> nome;
                            arquivo << nome << endl;
                            cout << "\nMais alguma? [s/n]";
                            cin >> opc7;
                            system("clear");
                    }
                    arquivo.close();

                    arquivo.open("domingo.txt", ios::in);

                    cout << "\nAulas informadas: " << endl;

                    if(arquivo.is_open()){
                        while(getline(arquivo,linha)){
                            cout << linha << endl;
                    }
                        arquivo.close();
                        system("clear");

                    }else{
                            cout << "Não foi possível abrir o arquivo" << endl;
                }
                cout << "\nMuito bem! Agora é só abrir o programa novamente e escolher o dia para ver seu horário, boa sorte!\n";
                exit(0);
             }
              case 2:
              {
                exit(0);
              }
            }

            case 1 :
                    cout << "\nEscolha o dia da semana: \n\n";
                    cout << "[1]segunda-feira\n[2]terça-feira\n[3]quarta-feira\n[4]quinta-feira\n[5]sexta-feira\n[6]sabado\n[7]domingo\n\n  ";
                    cin >> vez1;

                    switch(vez1){
                            case 1:
                            {
                                    ifstream arquivo;//entrada
                                    string linha;
                                    arquivo.open("segunda-feira.txt");
                                    if(arquivo.is_open()){
                                        for( std::string linha; getline(arquivo, linha );)
                                        {
                                                cout  << linha << endl;
                                        }
                                    break;
                                    arquivo.close();
                                    }else{
                                    cout << "\nAlgo deu errado";

                                    }
                                }
                             case 2:
                              {
                                    ifstream arquivo;//entrada
                                    string linha;
                                    arquivo.open("terça-feira.txt");
                                    if(arquivo.is_open()){
                                        for( std::string linha; getline(arquivo, linha );)
                                        {
                                                cout  << linha << endl;
                                        }
                                    break;
                                    arquivo.close();
                                    }else{
                                        cout << "\nAlgo deu errado";
                                        exit(0);
                                    }
                                }
                                case 3:
                                {
                                    ifstream arquivo;//entrada
                                    string linha;
                                    arquivo.open("quarta-feira.txt");
                                    if(arquivo.is_open()){
                                        while(getline(arquivo,linha)){
                                            cout << linha << endl;
                                        }
                                    break;
                                    arquivo.close();
                                    }else{
                                        cout << "\nAlgo deu errado";

                                    }
                                }
                                case 4:
                                {
                                    ifstream arquivo;//entrada
                                    string linha;
                                    arquivo.open("quinta-feira.txt");
                                    if(arquivo.is_open()){
                                        while(getline(arquivo,linha)){
                                            cout << linha << endl;
                                        }
                                    break;
                                    arquivo.close();
                                    }else{
                                    cout << "\nAlgo deu errado";

                                    }
                                }
                                case 5:
                                {
                                     ifstream arquivo;//entrada
                                    string linha;
                                    arquivo.open("sexta-feira.txt");
                                    if(arquivo.is_open()){
                                        while(getline(arquivo,linha)){
                                            cout << linha << endl;
                                        }
                                    break;
                                    arquivo.close();
                                    }else{
                                    cout << "\nAlgo deu errado";

                                    }
                                }
                                case 6:
                                {
                                    ifstream arquivo;//entrada
                                    string linha;
                                    arquivo.open("sabado.txt");
                                    if(arquivo.is_open()){
                                        while(getline(arquivo,linha)){
                                            cout << linha << endl;
                                        }
                                    break;
                                    arquivo.close();
                                    }else{
                                    cout << "\nAlgo deu errado";

                                    }
                                }
                                case 7:
                                {
                                    ifstream arquivo;//entrada
                                    string linha;
                                    arquivo.open("domingo.txt");
                                    if(arquivo.is_open()){
                                        while(getline(arquivo,linha)){
                                            cout << linha << endl;
                                        }
                                    break;
                                    arquivo.close();
                                    }else{
                                    cout << "\nAlgo deu errado";

                                    }
                                }
                            }
                        }



    return 0;
}

