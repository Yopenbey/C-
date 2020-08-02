#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    inicio:
    system("clear");


    int n1,n2,n3,n4, res;
    char opc;

    cout <<"Digite a primeira nota: ";
    cin >>n1;
    cout <<"Digite a segunda nota: ";
    cin>>n2;
    cout<<"Digite a terceira nota: ";
    cin>>n3;
    cout<<"Digite a quarta nota: ";
    cin>>n4;

    res=n1+n2+n3+n4;

    if(res >=280) {
        cout <<"\nAluno aprovado\n";
        cout <<res << " de 280";
    }else if(res >=160){
        cout <<"\nAluno vai para a rescuperação\n";
        cout <<res << " de 280";
    }else{
        cout <<"\nAluno resprovado\n";
        cout<<res<< " de 280";

    }
    cout << "\nDigitar outras notas?\n[s/n]: ";
    cin >> opc;

    if(opc=='s' or opc=='S'){
        goto inicio;

    }
