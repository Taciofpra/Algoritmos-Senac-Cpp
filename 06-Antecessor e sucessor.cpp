#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, antecessor, sucessor;
    
    cout<<"-------------------------"<<endl;
    cout<<"--Antecessor e Sucessor--"<<endl;
    cout<<"-------------------------"<<endl;
    
    cout<<"Digite um número: ";
    cin>>a;
    
    antecessor = a-1;
    sucessor = a+1;
    cout<<"O antecessor de "<<a<<" é "<<antecessor<<endl;
    cout<<"O sucessor de "<<a<<" é "<<sucessor<<endl;
    return 0;
}