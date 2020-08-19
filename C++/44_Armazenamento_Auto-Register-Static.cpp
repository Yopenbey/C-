#include <iostream>
#include <vector>

using namespace std;

void Somador(){
    static auto i=0;
    i++;
    cout << i << endl;

}

int main(){

    vector<int>v{1,2,3,4,5};

    for(auto it=v.begin();it!=v.end();it++){
        cout << *it << "\n";
    }

    cout << "\n";

    Somador();//static
    Somador();
    Somador();
    Somador();
    Somador();
    Somador();
    Somador();


    return 0;
}
