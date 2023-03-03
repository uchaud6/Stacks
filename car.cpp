#include <iostream>
#include <string>
using std::cout, std::string;

class Car{
    public:
        string make, model, color;
        Car(string mk, string mdl, string colr){
            this->make = mk;
            this->model = mdl;
            this->color = colr;
        }
        void drive(){
            cout << "The " + this->color + " " + this->make + " " + this->model + " is driving!";
        }
        void brake(){
            cout << "The " + this->color + " " + this->make + " " + this->model + " has stopped!";
        }
};

int main(){
    Car Nissan("Nissan","Altima","White");
    Nissan.drive();
}