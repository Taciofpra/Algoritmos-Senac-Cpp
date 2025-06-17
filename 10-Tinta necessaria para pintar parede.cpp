#include <iostream>
#include <string>
using namespace std;

int main() {
    float largura, altura, area, tinta;
    
    cout<<"-------------------------"<<endl;
    cout<<"---Quantidade de tinta---"<<endl;
    cout<<"-------------------------"<<endl;
    
    cout<<"Digite a Largura da parede: ";
    cin>>largura;
    cout<<"Digite a altura da parede: ";
    cin>>altura;
    
    area = largura * altura;
    
    tinta = area/2;
    
    cout<<"Você precisa de "<<tinta<<" litros de tinta para pintar a parede"<<endl;
    

    return 0;
}