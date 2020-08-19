#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
};

class Veiculo{
public:
    int tipo;
    string nome;
};

int main(){

    int num{10};
    string nome{"Daniel"};
    vector<int>valores{1,2,3,4,5};
    map<string,string>capitais{{"MG","Belo Horizonte"}};

    Pessoa p1{"Daniel", 18};
    Pessoa p2{"nome", 20};

    Veiculo v1{1, " Corsa"};
    Veiculo v2{2, "Sandero"};

    for(vector<int>::iterator it=valores.begin();it!=valores.end();it++){
        cout << *it << "\n\n";
    }

    for(map<string,string>::iterator it=capitais.begin();it!=capitais.end();it++){
        cout << it->first << " - " << it->second << "\n\n";
    }

    cout << p1.nome<< " - " << p1.idade << "\n\n";
    cout << v1.tipo << " - " << v1.nome << endl;



    return 0;
}
