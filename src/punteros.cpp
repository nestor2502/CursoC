#include<iostream>

using namespace std;

int main(){

    int numero = 200; 
    int *direccion = &numero;
    
    cout<<"El numero es: "<<*direccion<< " y la direccion de memoria es: " <<direccion; //se muestra el numero al usuario

    return 0; 
}