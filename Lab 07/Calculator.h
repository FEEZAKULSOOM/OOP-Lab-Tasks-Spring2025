

#include <iostream>
using namespace std;

class Calculator {
public:
    // Overloaded functions (Compile-time Polymorphism)
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c ;
    }
};



