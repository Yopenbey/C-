#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao{

public:
    int vel=0;
    int velMax;
    std::string tipo;
    Aviao(int tp);
    void imprimir();
private:

};

Aviao::Aviao(int tp){
    if(tp==1){
        velMax=800;
        tipo="Jato";
    }
    else if(tp==2){
        velMax=350;
        tipo="Monomotor";
    }
    else if(tp==3){
        velMax=180;
        tipo="Planator";
    }

};

void Aviao::imprimir(){
    std::cout << "Tipo.............: " << tipo << std::endl;
    std::cout << "Velocidade Máxima: " << velMax << std::endl;
    std::cout << "..........................................."<< std::endl;
};


#endif // AVIAO_H_INCLUDED
