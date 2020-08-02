#include <iostream>

using namespace std;

int fatorial(int n);
int fibonacci(int n);

int main(){

    int fat,fib,res;

    cout<<"(Fatorial) Insira um número: ";
    cin >> fat;
    res=fatorial(fat);
    cout << "\nFatorial de "<< fat << " = " <<res;

    cout<<"\n\n(Fibonacci) Insira um número: ";
    cin>>fib;
    cout <<"\nFibonacci com " << fib << " valores: ";
    for(int i=0;i<fib;i++){
        cout<<fibonacci(i+1) << " ";
    }

    cout <<"\n";

    return 0;
}

int fatorial(int n){
    if(n==0){
        return 1;
    }
    return n*fatorial(n-1);
}

int fibonacci(int n){
    if(n==1 || n==2){
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);

    }


}
