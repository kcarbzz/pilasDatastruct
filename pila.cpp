#include "pila.h"
Nodo::Nodo(int v)
{
    this->value=v;
    this->next=nullptr;
}
Nodo::~Nodo()
{
    //dtor
}

pila::pila()
{
    this->top=nullptr;
}

pila::~pila()
{
    //dtor
}
void pila::push(int value)
{
   Nodo* newNode = new Nodo(value);
   newNode->set_next(top);
   top = newNode;
}
void pila::show() {
   Nodo* temp = top;
   while(temp != nullptr) {
       temp->show();
       temp = temp->get_next();
   }
}
int pila::pop(){
    if(top!=nullptr){
        Nodo* temp=top;
        int value=temp->get_value();
        top=top->get_next();
        delete temp;
        return value;
    }

}
