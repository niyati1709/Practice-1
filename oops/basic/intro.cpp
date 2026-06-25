#include<iostream>
#include<cstring>
using namespace std;

class Hero{

    // properties
    private:
    int health;

    public:
    char *name;
    char level; 
    static int TimeToComplete;

    Hero(){
        cout << "Simple Constructor Called" << endl;
        name = new char[100];
    }

    // Parameterised constructor
    Hero(int health){
        this -> health = health;
    }

    Hero(int health, char level){
        this -> level = level;
        this -> health = health;
    }

    //copy constructor
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy Constructor Called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << "Name :- " << this->name << ", ";
        cout << "Health :- " << this -> health << ", ";
        cout << "Level :- " << this -> level << endl;
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

    void setName(char name[]){
        strcpy(this->name, name);
    }

    static int random(){
        return TimeToComplete;
    }

    //destructor
    ~Hero(){
        cout << "Destructor bhai called" << endl;
    }
    
};

int Hero::TimeToComplete = 5;

int main(){

    // cout << Hero::TimeToComplete << endl;
    cout << Hero::random() << endl;


    // Hero a;
    // cout << a.TimeToComplete << endl;

    // Hero b;
    // b.TimeToComplete = 10;
    // cout << a.TimeToComplete << endl;
    // cout << b.TimeToComplete << endl;

   
   
   
   
   
   
   
    // //statically
    // Hero a;

    // //dynamically
    // Hero *b = new Hero();
    // //manually called destructor
    // delete b;




    // Hero h1;

    // h1.setHealth(12);
    // h1.setLevel('D');
    // char name[7] = "Niyati";
    // h1.setName(name);

    // // h1.print();

    // //use default copy constructor

    // Hero h2(h1);
    // //h2.print();
    // // Hero h2 = h1;

    // h1.name[0] = 'R';
    // h1.print();

    // h2.print();

    // h1 = h2;
    // h1.print();

    // h2.print();   
    
    
    
    // Hero S(70,'C');
    // S.print();

    // // Copy constructor
    // Hero R(S);
    // R.print();















    // // object created statically
    // Hero ramesh(10);
    // // cout << "Address of ramesh " << &ramesh << endl;
    // ramesh.print();

    // // dynamically
    // Hero *h = new Hero(11);
    // h->print();

    // Hero temp(22, 'B');
    // temp.print();

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