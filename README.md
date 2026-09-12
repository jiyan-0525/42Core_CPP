# 42Core_CPP

A collection of C++ projects from the 42 School curriculum, covering fundamental concepts and object-oriented programming principles.

## 📚 Project Modules

This repository contains the following C++ modules:

- **cpp00** - First introduction to C++ syntax and basics
- **cpp01** - Memory allocation and pointer manipulation
- **cpp02** - Classes, constructors, and operator overloading
- **cpp03** - Inheritance and polymorphism
- **cpp04** - Abstract classes and interfaces
- **[cpp05](#cpp05)** - Exceptions, robust class design, and bureaucratic workflows
- **[cpp06](#cpp06)** - C++ casts, scalar conversion, serialization, and RTTI
- **[cpp07](#cpp07)** - Function and class templates
- **[cpp08](#cpp08)** - Templated algorithms and STL containers
- **[cpp09](#cpp09)** - STL-driven problem solving with parsing and performance

## 🎯 Objectives

Each module covers specific C++ concepts:

- Classes and object-oriented programming
- Constructors, destructors, and assignment operators
- Member functions and access specifiers
- Operator overloading
- Inheritance and virtual functions

## 🛠️ Prerequisites

- C++98/C++17 standard or later
- A C++ compiler (g++, clang++, etc.)
- Make (for build automation)

## 📦 Building & Running

To compile a specific module:

```bash
cd cpp00  # or any module
make
```

To clean build artifacts:

```bash
make clean
```

To remove all generated files:

```bash
make fclean
```

## 📖 Module Breakdown

### cpp00
Introduction to basic C++ syntax, includes, and first program structure.

### cpp01
Working with memory, pointers, and references.

### cpp02
Classes, constructors, and learning operator overloading.

### cpp03
Inheritance models and polymorphic behavior.

### cpp04
Abstract classes, pure virtual functions, and interfaces.

### cpp05
Exception handling and class interactions around a bureaucratic system.
- **ex00**: Implement `Bureaucrat` with strict grade bounds and custom exceptions.
- **ex01**: Add `Form` signing rules and validate grade-based authorization.
- **ex02**: Introduce executable concrete forms derived from `AForm`.
- **ex03**: Implement `Intern` to create forms dynamically by name.

### cpp06
Type conversion, casting, and runtime type identification.
- **ex00**: Build `ScalarConverter` to print char/int/float/double conversions.
- **ex01**: Implement pointer serialization/deserialization with `uintptr_t`.
- **ex02**: Use RTTI (`dynamic_cast`) to identify derived types from `Base`.

### cpp07
Generic programming with templates.
- **ex00**: Implement templated `swap`, `min`, and `max`.
- **ex01**: Implement templated `iter` to apply functions over arrays.
- **ex02**: Implement a templated `Array` class with bounds checking.

### cpp08
Template utilities with STL containers.
- **ex00**: Implement `easyfind` to search values in standard containers.
- **ex01**: Implement `Span` to compute shortest/longest distance between numbers.
- **ex02**: Implement `MutantStack`, a stack that exposes iterator access.

### cpp09
Algorithmic exercises using STL containers and parsing.
- **ex00**: Implement `BitcoinExchange` to evaluate date/value queries from input files.
- **ex01**: Implement an `RPN` calculator for reverse polish notation expressions.
- **ex02**: Implement `PmergeMe` to compare merge-insert sorting performance on containers.

## 🎓 Key Concepts Covered

- ✅ Object-Oriented Programming (OOP)
- ✅ Class design and encapsulation
- ✅ Operator overloading
- ✅ Inheritance and virtual functions
- ✅ Memory management
- ✅ Exceptions and robust error handling
- ✅ Templates and generic programming
- ✅ STL containers and algorithms
- ✅ Best practices and 42 School coding standards
