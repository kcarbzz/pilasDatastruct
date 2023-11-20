#include <iostream>
#ifndef PILA_H
#define PILA_H
class Nodo
{
    public:
        Nodo(int value);
        virtual ~Nodo();
        void set_value(int v){this->value=v;};
        int get_value(){return this->value;};
        void set_next(Nodo* nxt){this-> next=nxt;};
        Nodo* get_next(){return this->next;};
        void show(){std::cout<<value<<" ";};

    private:
        Nodo* next;
        int value;

};

class pila
{
    public:
        pila();
        virtual ~pila();
        void show();
        void push(int value);
        int pop();

    private:
        Nodo* top;
};

#endif // PILA_H
