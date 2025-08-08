// main.cpp
#include<iostream>
#include "shapes.h"
#include "salary_system.h"
#include "distance.h"
using namespace std;


//                                       Task #01


int main() {
    Shape* shapePtr;  // base class pointer

    Rectangle rect;
    Circle circ;

    cout << "=== Rectangle Area Calculation ===\n";
    rect.input();
    shapePtr = &rect;
    cout << "Area of rectangle: " << shapePtr->area() << "\n\n";

    cout << "=== Circle Area Calculation ===\n";
    circ.input();
    shapePtr = &circ;
    cout << "Area of circle: " << shapePtr->area() << "\n";




//                                       Task #02




    Employee* emp;

    PermanentEmployee p(40000, 5000);
    ContractEmployee c(800, 30);

    emp = &p;
    cout << "Permanent Employee Salary: " << emp->calculateSalary() << "\n";

    emp = &c;
    cout << "Contract Employee Salary: " << emp->calculateSalary() << "\n";



//                                             Task # 03




    Distance d1(5, 8);
    Distance d2(5, 8);
    Distance d3(6, 2);

    cout << "Distance 1: ";
    d1.display();

    cout << "Distance 2: ";
    d2.display();

    cout << "Distance 3: ";
    d3.display();

    cout << "\nComparing d1 and d2: ";
    if (d1 == d2)
        cout << "Equal\n";
    else
        cout << "Not Equal\n";

    cout << "Comparing d1 and d3: ";
    if (d1 == d3)
        cout << "Equal\n";
    else
        cout << "Not Equal\n";

   


    

    return 0;
}

