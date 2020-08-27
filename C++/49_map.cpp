#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int,string>prod;
    map<int,string>::iterator itmap;
    string co;

    prod.insert(pair<int,string>(1,"Mouse"));
    prod.insert(pair<int,string>(2,"Teclado"));
    prod.insert(pair<int,string>(3,"Monitor"));
    prod.insert(pair<int,string>(4,"Cx.Som"));


   itmap=prod.find(3);
   if(itmap==prod.end()){
            cout << "Produto não encontrado" << endl;
   }else{
             cout << "Produto em estoque" << endl;
             cout << "Código: " << itmap->first << " - Produto: " << itmap ->second << endl;
   }



    return 0;
}
