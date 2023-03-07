#include <iostream>
using namespace std;

struct Nodo{
    int data;
    Nodo* siguiente;
};

class Pila {
private:
    Nodo* tope;
public:
    Pila() {
        tope = NULL;
    }
    void push(int x) {
        Nodo* temp = new Nodo;
        temp->data = x;
        temp->siguiente = tope;
        tope = temp;
    }

    void pop() {
        if (tope == NULL) return;
        Nodo* temp = tope;
        tope = tope->siguiente;
        delete temp;
    }
    void imprimir() {
        cout << tope->data << endl;
    }
    void Vacio() {
        if (tope == NULL){
            cout << "$" << endl;
        }else{
            cout << "Aun no esta vacio"<<endl;
        }
    }

};
int ejercicio1(){
    Pila p;
    p.push(1);//Hola
    p.push(2);//+
    p.push(3);//Mundo
    p.imprimir();
    p.pop();//se quita mundo
    p.imprimir();
    p.pop();//se quita +
    p.imprimir();
    p.pop();//se quita hola
    p.Vacio();
    return 0;
}

int ejercicio2(){
    Pila p;
    p.push(1);//a
    p.push(2);//+
    p.push(3);//b
    p.push(4);//+
    p.push(5);//c
    p.push(6);//+
    p.push(7);//d
    p.push(8);//+
    p.push(9);//e
    p.push(10);//+
    p.push(11);//f
    p.imprimir();
    p.pop();//se quita f
    p.imprimir();
    p.pop();//se quita +
    p.imprimir();
    p.pop();//se quita e
    p.imprimir();
    p.pop();//se quita +
    p.imprimir();
    p.pop();//se quita d
    p.imprimir();
    p.pop();//se quita +
    p.imprimir();
    p.pop();//se quita c
    p.imprimir();
    p.pop();//se quita +
    p.imprimir();
    p.pop();//se quita b
    p.imprimir();
    p.pop();//se quita +
    p.imprimir();
    p.pop();//se quita a
    p.Vacio();
    return 0;

}
int main() {
    ejercicio1();
    ejercicio2();
    return 0;
}