#include <iostream>
#include <iomanip> //manipilação da entrada e saída
#include <math.h>

using namespace std;

int main(){

    float pi=M_PI;

    cout.precision(30);

    cout << "Valor de PI: " << pi << "\n";

    cout.precision(-1);

    cout << "Valor de PI: " << std::scientific << pi << "\n";

    return 0;
}
