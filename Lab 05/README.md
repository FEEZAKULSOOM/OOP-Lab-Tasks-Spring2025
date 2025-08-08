# 📘 C++ OOP Practice Tasks – BSSE

Prepared by: Feeza Kulsoom
This folder contains solutions to 3 C++ OOP-based practice tasks involving virtual functions, polymorphism, and operator overloading.

---

## ✅ Task 1: Salary Calculation System (Polymorphism)

### 🎯 Objective:
Simulate salary calculation for two types of employees using **runtime polymorphism**.

### 🔹 Classes Used:
- **Employee (base class)**  
  - Virtual function: `calculateSalary()`
- **PermanentEmployee (derived)**  
  - Attributes: `basicSalary`, `bonus`  
  - Overrides `calculateSalary()` → returns `basicSalary + bonus`
- **ContractEmployee (derived)**  
  - Attributes: `hourlyRate`, `hoursWorked`  
  - Overrides `calculateSalary()` → returns `hourlyRate * hoursWorked`

### 🔹 Main Function:
- Uses `Employee*` pointer to call overridden functions
- Demonstrates runtime polymorphism

### 🔹 Sample Data:
- Permanent: `basicSalary = 40000`, `bonus = 5000`  
- Contract: `hourlyRate = 800`, `hoursWorked = 30`

---

## ✅ Task 2: Shape Area using Virtual Functions

### 🎯 Objective:
Demonstrate virtual function usage with geometric shapes.

### 🔹 Classes Used:
- **Shape (base class)**  
  - Virtual function: `area()`
- **Rectangle (derived)**  
  - Attributes: `length`, `width`  
  - Overrides `area()` → returns `length * width`
- **Circle (derived)**  
  - Attribute: `radius`  
  - Overrides `area()` → returns `π * radius²`

### 🔹 Main Function:
- Uses `Shape*` pointer to access both shapes and call the correct `area()`.

---

## ✅ Task 3: Operator Overloading (`==` for Distance)

### 🎯 Objective:
Overload the `==` operator to compare two distances.

### 🔹 Class Used:
- **Distance**  
  - Private members: `feet`, `inches`  
  - Constructor to initialize values  
  - Overloads `==` operator using a member function  
  - `display()` function to print the distance

### 🔹 Main Function:
- Creates multiple `Distance` objects  
- Compares them using overloaded `==`  
- Displays if they are equal or not

---


