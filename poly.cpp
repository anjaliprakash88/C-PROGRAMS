#include<iostream>
using namespace std;

class Animal{
    public:
    void animal1(){
        cout<< "animal make sound";
    }
};

class Dog: public Animal{
    public: 
    void animal1(){
        cout<< "this is dog";
    }
};

int main(){
    Dog d1;
    d1.animal1(); 
    return 0;
}