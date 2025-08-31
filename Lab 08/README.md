📘 C++ OOP Tasks Project

This project demonstrates key Object-Oriented Programming (OOP) concepts in C++, including compile-time polymorphism and operator overloading.
Each task is written in its own header file (.h), and all tasks are executed in a single main.cpp.

📂 File Structure
Task1_Calculator.h   → Compile-time Polymorphism (Function Overloading)
Task2_Complex.h      → Operator Overloading (+ for Complex Numbers)
Task3_Distance.h     → Operator Overloading (== for Distance Equality)
main.cpp             → Runs all tasks together

📌 Tasks Overview
🔹 Task 1: Calculator (Compile-time Polymorphism)

Implements a Calculator class with overloaded add() functions.

Supports integers, doubles, and different parameter counts.

🔹 Task 2: Complex Numbers (Operator Overloading)

Implements a Complex class.

Overloads the + operator to add two complex numbers.

Displays the result in standard complex form.

🔹 Task 3: Distance Equality (Operator Overloading)

Implements a Distance class with feet and inch.

Overloads the == operator to check whether two distances are equal.

🚀 How to Compile & Run
Step 1: Compile
g++ main.cpp -o tasks

Step 2: Run
./tasks

📊 Example Output
========== Task 1: Calculator (Function Overloading) ==========
Sum of 3 integers: 9
Sum of 3 doubles: 10.5
Sum of 4 integers: 10

========== Task 2: Complex Numbers (Operator Overloading) ==========
First Complex: 2 + 3i
Second Complex: 4 + 5i
Sum: 6 + 8i

========== Task 3: Distance Equality (Operator Overloading) ==========
Distance 1: 5 feet 8 inches
Distance 2: 5 feet 8 inches
Distance 3: 6 feet 2 inches
Distance 1 and Distance 2 are equal.
Distance 1 and Distance 3 are NOT equal.

🎯 Learning Outcomes

Understanding function overloading (Compile-time Polymorphism).

Implementing operator overloading (+, ==).

Using classes, constructors, and modular code organization.

Writing clean, maintainable, and modular C++ code with header files.
