#include <iostream>
#include <vector>

using namespace std;

int main(){

    auto soma=[](vector<int>n) ->int{
            auto s=0;
            for(int x:n){
                    s+=x;
            }
            return s;
    };

    cout << "Resultado da soma: " <<  soma({1,1,5,8,4,8,789,25,147,65,146,});

    return 0;
}
