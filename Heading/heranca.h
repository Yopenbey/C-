#ifndef HERANCA_H_INCLUDED
#define HERANCA_H_INCLUDED //36_Poo_Parte4.cpp

class Veiculo{
public:
    int vel;
    int blind;
    int rodas;
    void setTipo(int tp);
    void setVelMax(int vm);
    void setArma(bool ar);
    void imp();
private:
    int tipo;
    int velMax;
    bool arma;

};

void Veiculo::imp(){
    std::cout <<"Tipo de veiculo:" << tipo << std::endl;
    std::cout <<"Tipo de veiculo:" << velMax << std::endl;
    std::cout <<"Tipo de veiculo:" << rodas << std::endl;
    std::cout <<"Tipo de veiculo:" << blind<< std::endl;
    std::cout <<"Tipo de veiculo:" << arma<< std::endl;
    std::cout <<"_______________________________________" << std::endl;

}

void Veiculo::setTipo(int tp){
    tipo=tp;
}

void Veiculo::setVelMax(int vm){
    velMax=vm;
}

void Veiculo::setArma(bool ar){
    arma=ar;
}

class Moto:public Veiculo{
public:
    Moto();
};

Moto::Moto(){
    vel=0;
    blind=0;
    rodas=2;
    setTipo(1);
    setVelMax(120);
    setArma(false);
}

class Carro:public Veiculo{
public:
    Carro();
};

Carro::Carro(){
    vel=0;
    blind=0;
    rodas=4;
    setTipo(2);
    setVelMax(180);
    setArma(false);
}

class Tanque:public Veiculo{
public:
     Tanque();
};

Tanque::Tanque(){
    vel=0;
    blind=10;
    rodas=4;
    setTipo(3);
    setVelMax(300);
    setArma:(true);
}

#endif // HERANCA_H_INCLUDED
