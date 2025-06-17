#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    float salario;
    cout<<"------------------"<<endl;
    cout<<"--Nome e salario--"<<endl;
    cout<<"------------------"<<endl;
    
    cout<<"Digite o nome do funcionário: ";
    getline(cin, nome);
    cout<<"Digite seu salário: ";
    cin>>salario;
    cout<<"O funcionário "<<nome<<" Tem um salário de R$"<<salario<<" em Junho";
    
    

    return 0;
}