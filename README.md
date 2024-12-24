# Bank System Project

## Content
1. [About](#about)
2. [Installation](#installation)
3. [Features](#features)
4. [Object-Oriented Programming (OOP) Implementation](#key-oop-concepts-implemented)

## About
System built using C++ to implement OPP concepts.
This project is a console application designed to simulate a banking system, in terms of managing accounts, transferring money between accounts and converting all world currencies. 


## Installation

### Prerequisites
Before installing, ensure you have the following:
- A C++ compiler (e.g., GCC, Clang, or MSVC)

### Steps to Build and Run the Project

1. **Clone the Repository**  
   Clone the project from GitHub:
   ```bash
   git clone https://github.com/AbdelRahmanAlTamimi/bank-system.git
   cd bank-system
2. **Compile the project**
e.g. g++ main.cpp -o bank-system

## Features
1. Login screen (authentication)
2. Apply permissions for users (authorization)
3. Lock the system after 3 failed logins
4. Provide CRUD operation on clients
5. Provide regular banking transactions
6. Provide CRUD operation on users
7. Log file for transfers and Login Processes
8. Provide currency calculator To convert any currency in the world to another currency
9. Logout function
10. Maintainability
11. Reusability


## Object-Oriented Programming (OOP) Implementation

This project is built entirely using **Object-Oriented Programming (OOP)** principles, ensuring clean, modular, and reusable code. All core concepts of OOP are applied meticulously to enhance code maintainability and scalability.

### Key OOP Concepts Implemented:
1. **Encapsulation**:
   - All classes and objects are designed to encapsulate data and behavior, restricting direct access to internal components and ensuring robust data management.
   - Example: Private member variables with public getter and setter methods In all classes.

2. **Inheritance**:
   - The project uses inheritance to promote code reusability and hierarchical relationships between classes.
   - Example: A base class `clsScreen` is inherited by all other screens to share common behavior.

3. **Polymorphism**:
   - Polymorphism is implemented to allow methods to be overridden and provide specific implementations for derived classes.
   - Example: Overriding the `IsNumberBetween()` method in a base `clsInputValidate` class to handle different data types.

4. **Abstraction**:
   - Abstraction in this project is achieved by **hiding implementation details** through the use of **private methods** within classes. These private methods encapsulate the internal logic, ensuring that only the necessary functionality is exposed through public methods.
   - Example: Private method `_LoadClientsDataFromFile()` used in `GetClientsList()` in `clsBankClient.h`.


### Why OOP Matters in This Project:
- **Modularity**: The codebase is structured into well-defined classes, making it easier to debug, test, and extend.
- **Reusability**: Core functionality is shared across different parts of the application using inheritance and composition.
- **Scalability**: The project is designed to accommodate future enhancements with minimal code changes.
- **Readability**: Code is clean, readable, and adheres to best practices in OOP.

By applying object-oriented programming concepts in this project, I will have mastered them and be able to use them effectively in future projects.
