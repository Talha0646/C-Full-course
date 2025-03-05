=> Object-Oriented Programming (OOP):
              OOP is a programming that uses objects and classes to structure 
              code, making it modular, reusable, and easy to maintain.     

-->Classes & Objects

1=Objects:
-> Objects are entities in the real world.
-> An object is an instance of a class.
-> They represent the basic runtime entities in object-oriented programming.
-> An object is a variable of a class type.
-> Objects can be accessed using the dot operator (.) or the arrow operator (-> for pointers).

2=Classes:
-> A class is a blueprint or a templates that defines the properties and behaviours of a object. 
-> It classifies and defines the structure of objects.
-> It is a fundamental unit in object-oriented programming.

3=Attributes:
          Data  memeber or properties of class they represent the set or characteristics of an object are  called on attributes 
          it is characterictice of an object.

4=Constructor:
-> A constructor is used to initialize an object.
-> It is a special member function that is automatically called when an object is created.
-> The constructor has the same name as the class and do not return any value 

5=Types of constructors:
-> Default Constructor: Takes no parameters.
-> Parameterized Constructor: Takes parameters to initialize an object.
-> Copy Constructor: Initializes an object by copying another object.

6=Destructor:
-> A destructor is a special member function that is called when an object is deleted or goes out of scope.
-> A destructor cannot take any parameters.
-> The destructor has the same name as the class, but is preceded by a tilde (~), e.g., ~ClassName().

7=Types of OOPs:

->Encapsulation:
        is the binding of data (variables) and methods (functions) together into a single unit, i.e., a class.
        It helps to protect and hide data from outside interference, leading to data abstraction.

->Getters:
    are methods that provide read access to private data members, allowing external code to retrieve values safely.

->Setters:
     are methods that provide write access to private data members, allowing external code to modify values while enforcing validation rules.

->Abstraction:
         allows us to focus on essential features while hiding the implementation details.
         For example, the pow(x, y) function calculates x^y but hides the underlying implementation.
7=Inheritance:
         allows a class (derived class or child class) to inherit properties and behavior from another class (base class or parent class).

->Example of Inheritance:
     class Vehicle { }; // Parent class
     class Car : public Vehicle {}; // child class
     class Truck : public Vehicle {};// child class 
     class Scooter : public Vehicle {};// child class

8=Access specifiers and Mode of inheritance                                             functions / method 
      Private: Data and methods are accessible only within the class.
      Public: Data and methods are accessible to everyone.
      Protected: Data and methods are accessible within the class and its derived classes.

9=Types of Inherritance:
  Single inheritance       |  A child class inherits from a single parent class.
  Multi--level inheritance |  A child class inherits from another derived class (forms a chain).
  Multiple inheritance     |  A child class inheritic from multiple parent class. 
  Hierarchical inheritance |  A single parent class has multiple child classes.
  Hybrid inheritance       |  Combination of more than one inheritance types.

10=Diamond Problem;
            Base class has multiple parent classes having a common ancestor class.

11=Polymorphism:
           Ability of object and methods to take different forms 
                           "right"
                           
->The two types of polymorphism:
            1=Compile time polymorphism
            2=run time polymorphism

->Compile time                                                          ->Runtime Polymorphism::
 That is achieve through function overloading.                    That is achieve through function overriding          
                                                            
The function name is should be same,                              Function  name and parameters both should be same.
 but parameters can be different.
                                                   VS 
 It has faster execution time.                                    It is comparitively slower.
 
 It has more memory efficient.                                    It is less comparitavely.


12=Funtion overloading 
            Define a number of function with some funtion name but they perform diiferently according to the arguments passed. 
           / shape\                                                                              /   \
          /  Area()\                                                                            /     \
         /     !    \                                                                          /       \
        /      !     \                                                                     how many    type
     class  square   triangle



13=Friend Function:
           Non-member funtion  which can access private member of the class.
    For Example:
    class A{

       ----------
       ----------                        functionf1
       ----------
       frienf f1();
    };


14=Function overriding:
          Function overriding that allows a derived class to provide a specific implementation of a method that is 
 already defined in its base class.

15=Operator Overloading:
          Operator overloading allows customizing the behavior of operators (+, -, *, ==, etc.) 
          for user-defined types (classes & structs). It helps make objects behave like built-in types.
