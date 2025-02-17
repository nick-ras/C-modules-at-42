# C++ Modules Project

## Description
The **C++ Modules** project is designed to provide foundational knowledge of the C++ language, its core concepts, and how to use it in various programming scenarios. The project includes a series of modules that each cover key C++ concepts, focusing on developing practical skills that can be applied in real-world projects.

---

## Modules Overview

### Module 00 - **C++ Basics**
The first module focuses on the basic syntax and structure of C++ programming. It includes topics such as:
- Variable declaration and initialization
- Control structures (if-else, loops)
- Functions and function overloading
- Arrays and basic data types

This module is intended for beginners to get familiar with the basic components of the C++ language.

---

### Module 01 - **Object-Oriented Programming (OOP) Basics**
This module introduces the core principles of Object-Oriented Programming in C++. Topics covered include:
- Classes and objects
- Member variables and functions
- Constructors and destructors
- Access control (private, public, protected)

The goal of this module is to give a solid understanding of how to structure C++ programs using OOP concepts.

---

### Module 02 - **Advanced OOP & Inheritance**
Building upon Module 01, this module delves deeper into the more advanced aspects of OOP. It focuses on:
- Inheritance and polymorphism
- Function overriding and virtual functions
- Abstract classes and pure virtual functions
- Operator overloading

Module 02 aims to strengthen understanding of object-oriented principles, allowing students to design more complex systems using inheritance and polymorphism.

---

## Project Requirements
Each module contains exercises to apply what you’ve learned, with the following general requirements:
- **Code Style:** Maintain clean, readable, and properly commented code.
- **Error Handling:** Use appropriate error handling techniques.
- **Memory Management:** Demonstrate proper memory management in C++ (e.g., using pointers and destructors).

---

### Module 03 - **Templates & Exception Handling**
Module 03 introduces the concepts of **templates** and **exception handling** in C++. Key topics include:
- **Function templates** and **class templates**
- **Template specialization**
- **Try, catch, and throw statements** for error handling
- Creating custom exceptions

This module builds on the fundamentals, focusing on writing generic code with templates and handling errors efficiently using exceptions. Understanding templates helps you write reusable, flexible code, while exception handling ensures that your program can gracefully handle unexpected conditions.

---

### Module 04 - **STL (Standard Template Library) Basics**
In this module, you'll dive into the **Standard Template Library (STL)** in C++. The topics covered are:
- Introduction to STL containers (vector, map, set, etc.)
- Iterators and algorithms (find, sort, etc.)
- Using **pair** and **tuple**
- Basic understanding of **iterators**, **iterators functions**, and **modifying STL containers**

The STL provides a powerful set of pre-written classes and functions, which makes working with collections of data much easier and efficient. This module will help you integrate STL into your projects for enhanced performance and convenience.

---

### Module 05 - **File I/O and Serialization**
Module 05 focuses on **File Input/Output** and **Serialization** in C++. It covers:
- Reading from and writing to files using **fstream**
- Handling binary files and text files
- Serializing and deserializing data
- Understanding file pointers and seek operations

This module teaches how to interact with the file system, an essential skill for many C++ applications. You'll also explore how to save and restore the state of objects and data structures, which is key for tasks like data storage or network communication.

---

### Module 06 - **Advanced File I/O and Memory Management**
Module 06 expands on file handling and memory management in C++. Topics covered include:
- **Memory allocation and deallocation** (malloc, free, new, delete)
- Advanced **file I/O operations** (random access, mapping files to memory)
- Handling large files efficiently
- Using **smart pointers** for automatic memory management

This module delves deeper into optimizing memory usage and handling large amounts of data through advanced I/O techniques. Understanding memory management helps in writing efficient and scalable applications, especially when dealing with large datasets.

---

### Module 07 - **Multithreading & Concurrency**
In this module, you will learn about **multithreading** and **concurrent programming** in C++. Topics include:
- Creating and managing threads using the C++ Standard Library
- Synchronization techniques (mutexes, condition variables, etc.)
- **Deadlock**, **race conditions**, and how to avoid them
- Thread-safe data structures

Multithreading allows you to perform multiple tasks at once, which can greatly improve the performance of your applications. This module equips you with the skills to write efficient, concurrent code and handle the complexities of shared resources.

---

### Module 08 - **Networking & Sockets**
Module 08 introduces **network programming** using **sockets** in C++. You will cover:
- Basic understanding of **TCP/IP and UDP protocols**
- Creating **client-server applications** using sockets
- Using **select** and **poll** for non-blocking communication
- Sending and receiving data between different systems over a network

This module equips you with the skills to write networked applications, which is essential in today’s interconnected world. You’ll learn how to create programs that communicate over the internet or local networks.

---

### Module 09 - **Design Patterns**
In this module, you will learn about commonly used **design patterns** in C++. Topics include:
- **Creational, Structural, and Behavioral Patterns**
- Patterns like **Singleton**, **Factory**, **Observer**, and **Strategy**
- Applying design patterns to solve common software engineering problems
- Writing maintainable and reusable code

Design patterns are proven solutions to common software design problems. Understanding them will help you design more efficient, scalable, and maintainable systems.

---

### Module 10 - **Project: Building a Full Application**
The final module brings everything together by applying the skills you’ve learned throughout the project. You will:
- Design and implement a complete C++ application
- Use a combination of OOP, templates, file I/O, memory management, and multithreading
- Focus on software architecture and design principles
- Document your code and write unit tests

This is a hands-on project that will showcase your ability to build complex applications using C++. It will help solidify your understanding of the core concepts and prepare you for real-world development.

---


## Key Restrictions & Challenges

- **Memory Management:**  
  In C++, you need to manually manage memory (using `new` and `delete`), which can be challenging but is important for building efficient applications.

- **Object-Oriented Principles:**  
  Mastering OOP concepts such as inheritance, polymorphism, and encapsulation can be difficult, but is essential for designing scalable and maintainable C++ applications.

- **C++ Syntax and Semantics:**  
  The syntax and rules of C++ can be tricky, especially with pointers, memory allocation, and operator overloading.

---

## Running It

### 1. **Compile the Code**
To compile the C++ code, use the following `g++` command:

```bash
g++ -Wall -Wextra -Werror module_00.cpp -o module_00
```
### 1. **Run the different projects**
You can see in the makefiles with the executables are called, and in the main program if any parameters are needed, when executing it in bash
