#include <iostream>

using namespace std;

int main(){

    int num,num2;

    inicio:

    cout << "\nHow old are you? ";
    cin >> num;

    if(num >=50 && num <=100 ) {
        cout << "\nYou're really old!\n";

    }else if (num > 20 && num <50  ){
        cout << "\nThat's a good age!\n";

    }else if (num < 20 && num >=1){
        cout << "\nYoung!\n";
    }else{
        cout << "\nAre you kidding me?\n";
        cout << "Tell me the truth!\n ";
    }

    goto inicio;

    cout <<"Digite outro valor: ";
    cin >> num2;

     if(num2 <4 || num2 >10) {
        cout << "\nValor aceito\n";

    }else{
        cout << "\nNão aceito\n";
    }





    return 0;
}
