#include<iostream>
using namespace std;

class Hero{

    // properties
    private:
    int health;

    public:
    char level;

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
    //creation of object  
    Hero h1;
    cout << sizeof(h1) << endl;
    // use of getter
    cout << "Health is " << h1.getHealth() << endl;
    // use of setter
    h1.setHealth(70);
    h1.level = 'A';

    cout<<"health : " << h1.getHealth() << endl;
    cout<<"level : " << h1.level << endl;

    return 0;
}