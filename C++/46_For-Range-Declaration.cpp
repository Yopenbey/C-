#include <iostream>
#include <vector>

using namespace std;

int main(){

    int x[10]{10,20,30,40,50,60,70,80,90,100};
    vector<int>n{100,200,300,400,500,600,700,800,900,1000};

    const char* nome="Bruno\n";

    for(  int i=0; i<=sizeof(nome);i++){
        cout << nome[i] ;
    }

    for(auto i:n){
        cout << i << endl;
    }

    return 0;
}
