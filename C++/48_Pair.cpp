#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main(){

    const int tam=3;

    vector < pair< int,string >> prod;
    vector < pair< int,string >> prod2;

    prod.push_back(make_pair(18,"Santos"));
    prod2.push_back(make_pair(17,"Monteiro"));
    prod.push_back(make_pair(16,"Silva"));

    for(auto i:prod){
        cout << i.first << " - " << i.second << endl;
    }

    return 0;
}
