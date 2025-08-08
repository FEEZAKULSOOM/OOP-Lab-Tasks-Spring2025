# 👨‍💻 OOP Inheritance Tasks – C++ Projects

Prepared by: **Feeza Kulsoom**  


---

## 📚 Overview

This folder contains four concise and educational C++ programs demonstrating key concepts of **Object-Oriented Programming (OOP)** using various types of **inheritance**:

- ✅ Single Inheritance  
- ✅ Multilevel Inheritance  
- ✅ Hierarchical Inheritance  
- ✅ Multiple Inheritance  

Each task includes:
- Proper class structure
- User input with validation
- Clear output using display functions
- Simple syntax without use of `getline`, `cin.ignore`, or complex libraries

---

## 🔹 Task 1 – Single Inheritance

- **Classes**: `Person`, `Student`
- **Concept**: A student is a person with an additional `student_id`
- **Features**: Accepts and displays student information

✅ Demonstrates simple inheritance of properties and methods.

---

## 🔹 Task 2 – Multilevel Inheritance

- **Classes**: `Person` → `Employee` → `Manager`
- **Concept**: A manager is an employee who is also a person
- **Features**: Accepts and displays name, age, employee ID, and department

✅ Demonstrates inheritance through multiple levels of the hierarchy.

---

## 🔹 Task 3 – Hierarchical Inheritance

- **Classes**: `Employee` → `Developer`, `Designer`
- **Concept**: Both developers and designers are employees
- **Features**: Accepts and displays employee info plus language/tool

✅ Shows how multiple classes can inherit from a single base class.

---

## 🔹 Task 4 – Multiple Inheritance

- **Classes**: `Printer`, `Scanner` → `Photocopier`
- **Concept**: A photocopier is both a printer and a scanner
- **Features**: Calls `print_document()` and `scan_document()` via `photocopy()`

✅ Demonstrates how one class can inherit from multiple sources.

---

## 📁 Structure

- `student_info.h` → Single Inheritance  
- `payroll_system.h` → Multilevel Inheritance  
- `organization.h` → Hierarchical Inheritance  
- `device.h` → Multiple Inheritance  
- `main.cpp` → Demonstration files for each task

---

## ✅ How to Compile

Use any C++ compiler
