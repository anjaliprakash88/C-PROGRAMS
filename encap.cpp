#include<iostream>
using namespace std;
class Employee{
    private:
    int salary;
    public:
    void setSalary(int s){
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};
int main(){
    Employee e1;
    e1.setSalary(100000);
    cout<<e1.getSalary();
    return 0;
}