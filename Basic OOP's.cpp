=> Object-Oriented Programming (OOP):
        OOP is a programming that uses objects and classes to structure 
        code, making it modular, reusable, and easy to maintain.     

-->Importance of OOPs:      

1=Objects:
        An object is an instance of a class. It represents a real-world entity and contains both data 
        (attributes or variables) and functions (methods or behaviors) that operate on the data. 

2=Classes:
        A class is a blueprint or template for creating objects. It defines a data type by bundling data
        (attributes or properties) and methods (functions or behaviors) that operate on the data into a single unit.

3=Attributes:
        Data memeber or properties of class they represent the set or characteristics of an object are  
        called on attributes it is characterictice of an object.

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
        Encapsulation is the binding of data (variables) and methods (functions) together into a single unit, 
        i.e., a class.It helps to protect and hide data from outside interference, leading to data abstraction.

->Getters:
        Getters are methods that provide read access to private data members, allowing external code to 
        retrieve values safely.

->Setters:
        Setters are methods that provide write access to private data members, allowing external code to
        modify values while enforcing validation rules.

->Abstraction:
        Abstraction allows us to focus on essential features while hiding the implementation details.
        For example, the pow(x, y) function calculates x^y but hides the underlying implementation.
        
7=Inheritance:
        Inheritance allows a class (derived class or child class) to inherit properties and behavior 
        from another class (base class or parent class).

->Example of Inheritance:
        class Vehicle { }; // Parent class
        class Car : public Vehicle {}; // child class
        class Truck : public Vehicle {};// child class 
        class Scooter : public Vehicle {};// child class

8=Access specifiers and Mode of inheritance:                                         functions / method 
        Private: Data and methods are accessible only within the class.
        Public: Data and methods are accessible to everyone.
        Protected: Data and methods are accessible within the class and its derived classes.

9=Types of Inherritance:
        Single inheritance       |  A child class inherits from a single parent class.
        Multi--level inheritance |  A child class inherits from another derived class (forms a chain).
        Multiple inheritance     |  A child class inheritic from multiple parent class. 
        Hierarchical inheritance |  A single parent class has multiple child classes.
        Hybrid inheritance       |  Combination of more than one inheritance types.

10=Diamond Problem:
        Base class has multiple parent classes having a common ancestor class.

11=Polymorphism:
        The ability of a function, method, or object to take on multiple forms. 
        It allows one interface to be used for different data types or classes. 
                           
->The two types of polymorphism:
        1=Compile time polymorphism
        2=run time polymorphism

        (Compile time Polymorphism)                                            (Run-time Polymorphism)

 (1)That is achieve through function overloading.                    (1)That is achieve through function overriding          
                                                            
 (2)The function name is should be same,                             (2)Function  name and parameters both should be same.
    but parameters can be different.
                                                   VS 
 (3)It has faster execution time.                                    (3)It is comparitively slower.
 
 (4)It has more memory efficient.                                    (4)It is less comparitavely.


12=Funtion overloading: 
        Function overloading allows multiple functions with the same name but different 
        parameter types or number of parameters.
           / shape\                     /   \
          /  Area()\                   /     \
         /     !    \                 /       \
        /      !     \               /         \
     class  square   triangle     how many     type


13=Friend Function:
        Non-member funtion which can access private member of the class.
    For Example:
    class A{

       ----------
       ----------                        functionf1
       ----------
       frienf f1();
    };


14=Function overriding:
        Function overriding that allows a derived class to provide a specific implementation of a method 
        that is already defined in its base class.

15=Operator Overloading:
        Operator Overloading custom Operators: Redefining the behavior of operators (e.g., +, -, *) for 
        user-defined classes.  
