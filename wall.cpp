#include <iostream>
using namespace std;

// declare a class
class Wall {
   private:
    double length;
    double height;

   public:

    // parameterized constructor
    Wall(double len, double hgt) {
        // initialize private variables
        length = len;
        height = hgt;
    }

    // copy constructor with a Wall object as parameter
    Wall(Wall &obj) {
        // initialize private variables
        length = obj.length;
        height = obj.height;
    }
    double calculateArea() {
        return length * height;
    }
};

int main(int argc, char* argv[]) {


    if(argc>3)
    {
        cout<<"enter only hieght and width"<<endl;
    }
    else if(argc<=2)
    {
        cout<<"enter height and width to calculate area"<<endl;
    }
    else
    {
    // create an object of Wall class
    Wall wall1(atoi(argv[1]), atoi(argv[2]));

    // print area of wall1
    cout << "Area of Wall 1: " << wall1.calculateArea() <<" sq.meter"<< endl;

    // copy contents of wall1 to another object wall2
    Wall wall2 = wall1;

    // print area of wall2
    cout << "Area of Wall 2: " << wall2.calculateArea()<<" sq.meter" << endl;

    
    }

    return 0;
}