#include <iostream>
#include <string>
using namespace std;

int main() {
    float a, dobro, terca;
    
    cout<<"-------------------------"<<endl;
    cout<<"---Dobro e terça parte---"<<endl;
    cout<<"-------------------------"<<endl;
    
    cout<<"Digite um numero: ";
    cin>>a;
    
    dobro  = a*2;
    terca = a/3;
    
    cout<<"O dobro de "<<a<<" é "<<dobro<<endl;
    cout<<"A Terça parte de "<<a<<" é "<<terca<<endl;
    

    return 0;
}