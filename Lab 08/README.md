# 📘 C++ OOP Tasks Project  

This project demonstrates **Object-Oriented Programming (OOP)** concepts in **C++**, including **compile-time polymorphism** and **operator overloading**.  
Each task is separated into its own header file (`.h`) for modularity, while a single `main.cpp` file integrates and runs all tasks.  

---

## 📂 Project Structure
Task1_Calculator.h → Compile-time Polymorphism (Function Overloading)
Task2_Complex.h → Operator Overloading (+ for Complex Numbers)
Task3_Distance.h → Operator Overloading (== for Distance Equality)
main.cpp → Executes all tasks



---

## 📌 Tasks Overview

### 🔹 Task 1: Calculator (Compile-time Polymorphism)
- Implements a `Calculator` class.  
- Demonstrates **function overloading** with three `add()` functions.  
- Supports integers, doubles, and different parameter counts.  

### 🔹 Task 2: Complex Numbers (Operator Overloading)
- Defines a `Complex` class.  
- Overloads the **`+` operator** to add two complex numbers.  
- Displays results in standard complex form (`a + bi`).  

### 🔹 Task 3: Distance Equality (Operator Overloading)
- Implements a `Distance` class with private members: **feet** and **inch**.  
- Overloads the **`==` operator** to compare two distances.  
- Displays whether the given distances are equal or not.  

---


📊 Sample Output

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
Understand compile-time polymorphism using function overloading.

Implement operator overloading (+ and ==) in C++.

Use constructors, classes, and modular programming with header files.

Gain experience in clean project structuring for better maintainability.
