#include <iostream>
#include <stdio.h> //Para o gets
#include <stdlib.h> //Para o malloc


using namespace std;

int main(){

    char *vnome;

    vnome = (char *) malloc(sizeof(char) +1);

    gets(vnome);

    cout << vnome;


    return 0;
}
