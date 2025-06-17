#include <iostream>
#include <string>
using namespace std;

int main() {
    float a;
    
    cout<<"-------------------------"<<endl;
    cout<<"--Conversão de unidades--"<<endl;
    cout<<"-------------------------"<<endl;
    
    cout<<"Digite uma distancia em metros: ";
    cin>>a;
    
    cout<<a/1000<<"Km"<<endl;
    cout<<a/100<<"hm"<<endl;
    cout<<a/10<<"Dam"<<endl;
    cout<<a*10<<"dm"<<endl;
    cout<<a*100<<"cm"<<endl;
    cout<<a*1000<<"mm"<<endl;

    return 0;
}