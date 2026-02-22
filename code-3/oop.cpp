#include<iostream>
using namespace std;    
class Employee{
    public:
    int id;
    string name;
    void display(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
int main(){
    Employee emp1;
    emp1.id=101;
    emp1.name="John Doe";
    emp1.display();
    return 0;
}