# 🧬 C++ Module 04 – Polymorphism, Abstract Classes & Interfaces

This module introduces **subtype polymorphism** in C++98 through virtual functions, inheritance, and abstract classes. It builds on the fundamentals from previous modules and lays the foundation for designing flexible and reusable code through interfaces and dynamic behavior.

---

## 🧠 Key Concepts

- Subtype polymorphism through inheritance
- Virtual functions and function overriding
- Abstract classes and pure virtual functions
- Deep vs. shallow copying
- Interface design in C++98
- Proper dynamic memory handling

---

## 🧪 Exercises

### 📌 ex00 – Basic Polymorphism

- Create an `Animal` base class with virtual methods
- Derive `Dog` and `Cat` classes with overridden `makeSound()` functions
- Demonstrate polymorphic behavior using pointers to base class
- Introduce `WrongAnimal` and `WrongCat` to illustrate missing virtual functions

---

### 📌 ex01 – Dynamic Allocation & Deep Copying

- Introduce a `Brain` class containing an array of ideas (`std::string`)
- `Dog` and `Cat` now contain a dynamically allocated `Brain*`
- Ensure proper copy constructors and assignment operators
- Demonstrate correct destructor calls and deep copy semantics
- Avoid memory leaks when deleting `Animal*` pointers

---

### 📌 ex02 – Abstract Base Class

- Make `Animal` an abstract class using a pure virtual function
- Prevent instantiation of base `Animal` directly
- Design code to rely on interfaces rather than concrete implementations

---

### 📌 ex03 – Interface Design

- Implement a system of **materia crafting and usage**, inspired by RPG systems
- Key classes:
  - `AMateria`: Abstract base class for magic materials
  - `Ice` and `Cure`: Concrete implementations of `AMateria`
  - `Character`: Inventory system for up to 4 Materias
  - `MateriaSource`: Learns and clones Materia on request
- Use interface-style abstract classes (`ICharacter`, `IMateriaSource`)
- Handle memory ownership carefully when equipping/unequipping Materia

---
