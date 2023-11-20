#include <iostream>
#include "pila.cpp"
int main(){
    pila a;
    a.push(5);
    a.push(6);
    a.push(30);
    a.push(34);

    a.show();
    a.pop();
    a.show();
}
