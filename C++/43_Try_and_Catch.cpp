#include <iostream>
#include <vector>

double divide(double, double);

using namespace std;

int main(){

    double n1,n2;

    cin >> n1 >>n2;

    try{
        cout << divide(n1,n2);
    }catch(const char* e) {
        cout << "Error: " << e << endl;
    }

    return 0;
}

double divide(double n10, double  n20){
    if(n20==0){
        throw "Error de divisão por ZERO";
    }
    if(n10>=10){
        throw  "n10 precisa ser menor que 10";
    }
    return n10/n20;
}
