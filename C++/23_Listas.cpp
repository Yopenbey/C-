#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> aula;
    int tam;
    list<int>::iterator it;

    tam=10;
    for(int i=0; i<tam; i++){
        aula.push_front(i);
    }

    it=aula.begin();
    advance(it, 7);

    aula.insert(it,0);
    aula.erase(--it);
    //aula.clear();

    cout <<"Tamanho da lista: " << aula.size()<< "\n\n";

    aula.sort();

    tam=aula.size();
    for(int i=0; i<tam; i++){
        cout << aula.front() <<"\n";
        aula.pop_front();

    }

    cout << "\nTamanho da Lista: " << aula.size() << "\n\n";


    return 0;
}
