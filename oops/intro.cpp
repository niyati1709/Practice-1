#include<iostream>
using namespace std;

class Hero{

    // properties
    private:
    int health;

    public:
    char level; 

    Hero(){
        cout << "Constructor Called" << endl;
    }

    // Parameterised constructor
    Hero(int health){
        cout << "this -> " << this << endl;
        this -> health = health;
    }

    void print(){
        cout << health << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char l){
        level = l;
    }
};

int main(){

    // object created statically
    Hero ramesh(10);
    cout << "Address of ramesh " << &ramesh << endl;
    ramesh.getHealth();

    // dynamically
    Hero *h = new Hero;

    /*
    // static alloaction
    Hero a;
    cout << "level is " << a.level << endl;
    cout << "health is " << a.getHealth() << endl;

    // dynamic allocation
    Hero* b = new Hero;
    cout << "level is " << (*b).level << endl;
    cout << "health is " << (*b).getHealth() << endl;

    cout << "level is " << b->level << endl;
    cout << "health is " << b->getHealth() << endl;

    // //creation of object  
    // Hero h1;
    // cout << sizeof(h1) << endl;
    // // use of getter
    // cout << "Health is " << h1.getHealth() << endl;
    // // use of setter
    // h1.setHealth(70);
    // h1.level = 'A';

    // cout<<"health : " << h1.getHealth() << endl;
    // cout<<"level : " << h1.level << endl;
    */

    return 0;
}