# Object-Oriented Programming with Java and C++

This folder contains examples and implementations of Object-Oriented Programming (OOP) concepts using Java and C++. Below is a detailed description of the files and the concepts demonstrated in each.

## Files and Concepts

### [Student.java](./Student.java)
**Concepts Covered:**
- **Encapsulation:**
  - Private data members (`name`, `rollNo`, `marks`) ensure data hiding.
  - Public getter and setter methods provide controlled access to private data.
- **Abstraction:**
  - The `display()` method abstracts the internal details and provides a simple interface to display student details.

**Description:**
This program demonstrates encapsulation and abstraction by creating a `Student` class with private attributes and public methods to access and modify them. The `display()` method is used to print the student details.

---

### [hierarchy.java](./hierarchy.java)
**Concepts Covered:**
- **Inheritance:**
  - Single inheritance: `Employee` extends `Person`.
  - Multilevel inheritance: `Manager` extends `Employee`.
- **Constructor Chaining:**
  - Use of `super` to call parent class constructors.
- **super Keyword:**
  - Accessing parent class methods and constructors.

**Description:**
This program demonstrates single and multilevel inheritance by creating a class hierarchy:
- `Person` class with attributes `name` and `age`.
- `Employee` class extending `Person` with additional attributes `empID` and `salary`.
- `Manager` class extending `Employee` with an additional attribute `department`.

The `main` method creates a `Manager` object and displays all details using constructor chaining and the `super` keyword.

---

### [Mythread_B1.java](./Mythread_B1.java)
**Concepts Covered:**
- **Multithreading:**
  - Creating and managing threads.
- **Thread Lifecycle:**
  - Demonstrating thread states and execution.

**Description:**
This program demonstrates multithreading in Java. It includes examples of creating threads, managing their lifecycle, and understanding thread states. The program highlights how to use the `Thread` class and the `Runnable` interface to implement multithreading.

---

## C++ Files

### [Student.cpp](./Student.cpp)
**Concepts Covered:**
- **Encapsulation:**
  - Private data members and public methods.
- **Abstraction:**
  - Abstracting internal details using methods.

**Description:**
This program demonstrates encapsulation and abstraction in C++ by creating a `Student` class with private attributes and public methods to access and modify them.

---

### [Person.cpp](./Person.cpp)
**Concepts Covered:**
- **Inheritance:**
  - Single inheritance.

**Description:**
This program demonstrates single inheritance in C++ by creating a `Person` class and a derived class that extends its functionality.

---

### [Employee.cpp](./Employee.cpp)
**Concepts Covered:**
- **Inheritance:**
  - Multilevel inheritance.

**Description:**
This program demonstrates multilevel inheritance in C++ by creating a class hierarchy and showcasing constructor chaining.

---

### [BankAccount.cpp](./BankAccount.cpp)
**Concepts Covered:**
- **Encapsulation:**
  - Private data members and public methods.
- **Abstraction:**
  - Abstracting internal details using methods.

**Description:**
This program demonstrates encapsulation and abstraction in C++ by creating a `BankAccount` class with private attributes and public methods to access and modify them.

---

### [Exception_Handling.cpp](./Exception_Handling.cpp)
**Concepts Covered:**
- **Exception Handling:**
  - Try-catch blocks.
  - Throwing and catching exceptions.

**Description:**
This program demonstrates exception handling in C++. It includes examples of handling runtime errors using try-catch blocks and throwing custom exceptions.

---

### [File_Handling.cpp](./File_Handling.cpp)
**Concepts Covered:**
- **File Handling:**
  - Reading from and writing to files.

**Description:**
This program demonstrates file handling in C++. It includes examples of reading from and writing to files using file streams.

---

### [Area.cpp](./Area.cpp)
**Concepts Covered:**
- **Polymorphism:**
  - Function Overloading.

**Description:**
This program demonstrates polymorphism in C++ by implementing function overloading to calculate the area of different shapes.

---

## How to Run
### Java Files
1. Open the terminal in the folder containing the files.
2. Compile the Java files using the `javac` command. For example:
   ```powershell
   javac Student.java hierarchy.java Polymorphism.java Exception.java Mythread_A1.java Mythread_A2.java Mythread_B1.java
   ```
3. Run the compiled classes using the `java` command. For example:
   ```powershell
   java hierarchy
   ```

### C++ Files
1. Open the terminal in the folder containing the files.
2. Compile the C++ files using the `g++` command. For example:
   ```powershell
   g++ Student.cpp -o Student.exe
   ```
3. Run the compiled executables. For example:
   ```powershell
   .\Student.exe
   ```

## Additional Notes
- Ensure that Java and a C++ compiler (like GCC) are installed and properly configured on your system.
- The examples are designed to be simple and focus on demonstrating OOP concepts.

Feel free to explore and modify the code to deepen your understanding of OOP principles!