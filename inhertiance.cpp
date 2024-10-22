// #include<iostream>
// using namespace std;

// class Animal{
//     public: 
//     string name = "dog";
//     void anim(){
//         cout<<"they can walk";
//     }
// };
// class Cat: public Animal{
//     public:
//     string colour = "white";
// };

// int main(){
//     Cat c1;
//     c1.anim();
//     cout<<c1.name + "" + c1.colour;
//     return 0;
// }



// #include<iostream>
// using namespace std;

// class MyClass {
// public: 
//     void myFunction() {
//         cout << "some content in parent class\n";
//     }
// };

// class MyOtherClass {
// public: 
//     void myOtherFunction() {
//         cout << "some content in another parent class\n";
//     }
// };

// class MyChildClass : public MyClass, public MyOtherClass {
// public:
//     void myChildFunction() {
//         cout << "some content in child\n";
//     }
// };

// int main() {
//     MyChildClass c1;
//     c1.myChildFunction();
//     c1.myFunction();
//     c1.myOtherFunction();  
//     return 0;
// }


#include<iostream>
using namespace std;

class Employee {
protected: 
    int salary;
};

class Programmer : public Employee {
public:
    int bonus;
    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return salary;
    }
};

int main() {
    Programmer p1;
    p1.setSalary(500000);
    p1.bonus = 15000;
    
    cout << "Salary: " << p1.getSalary() << endl;
    cout << "Bonus: " << p1.bonus << endl;
    
    return 0;
}

