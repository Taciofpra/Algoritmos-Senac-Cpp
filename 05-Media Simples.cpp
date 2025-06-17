#include <iostream>
#include <string>
using namespace std;

int main() {
    float a, b, media;
    
    cout<<"-------------------"<<endl;
    cout<<"---Media Simples---"<<endl;
    cout<<"-------------------"<<endl;
    
    cout<<"Digite a nota 1: ";
    cin>>a;
    cout<<"Digite a nota 2: ";
    cin>>b;
    
    media = (a+b)/2;
    
    cout<<"Media entre "<<a<<" e "<<b<<" é igual a "<<media<<endl;

    return 0;
}