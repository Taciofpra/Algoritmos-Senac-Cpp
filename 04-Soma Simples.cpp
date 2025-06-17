#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, soma;
    
    cout<<"------------------"<<endl;
    cout<<"---Soma Simples---"<<endl;
    cout<<"------------------"<<endl;
    
    cout<<"Digite o valor a: ";
    cin>>a;
    cout<<"Digite o valor b: ";
    cin>>b;
    
    soma = a + b;
    cout<<"A soma entre "<<a<<" e "<<b<<" é igual a "<<soma;

    return 0;
}