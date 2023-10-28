# **Classes_and_objects**

## **THEORY**

C++ is an object-oriented programming language.

Everything in C++ is associated with classes and objects, along with its attributes and methods. For example: in real life, a car is an object. The car has attributes, such as weight and color, and methods, such as drive and brake.

Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members".

A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

Create a Class

To create a class, use the class keyword:

Example

Create a class called "MyClass":

class MyClass  // The class

{      

  public:  // Access specifier
    
    int myNum;        // Attribute (int variable)
    
    string myString;  // Attribute (string variable)

};

Create an Object
In C++, an object is created from a class. We have already created the class named MyClass, so now we can use this to create objects.

To create an object of MyClass, specify the class name, followed by the object name.

To access the class attributes (myNum and myString), use the dot syntax (.) on the object:

Example

Create an object called "myObj" and access the attributes:

class MyClass {       // The class
 
  public:             // Access specifier
   
    int myNum;        // Attribute (int variable)
    
     string myString;  // Attribute (string variable)

};

int main()
{
  
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  
  myObj.myNum = 15; 
  
  myObj.myString = "Some text";

  // Print attribute values
 
  cout << myObj.myNum << "\n";
 
  cout << myObj.myString;
 
  return 0;

}

![classes and objects](https://github.com/Purvansha022609/Classes-and-Objects/assets/139473344/10542b77-f581-4f45-b245-62335245a08a)

## **ALGORITHM**

- **Find the volume of cube**
  
The code you provided defines a C++ class named cuboid to represent a cuboid (a 3D rectangular shape) with default values for its height, width, and length. It then calculates and prints the volume of the cuboid in the main function. Here's an algorithmic description of the code:

1.Include the necessary header file for input and output operations, i.e., <iostream>.

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout.

3.Define a class named cuboid with the following public data members:

- double height with a default value of 2.0.
- double width with a default value of 3.0.
- double length with a default value of 5.0.

4.In the main function:

5.Create an instance of the cuboid class named c1.

6.Calculate the volume of the cuboid using the formula volume = height * width * length, where height, width, and length are the data members of the c1 object.

7.Store the calculated volume in a double variable vol.

8.Print the calculated volume using cout.

- **Write a function to display output**

1.Include the necessary header file for input and output operations, i.e., <iostream>.

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout.

3.Define a class named cuboid with the following public data members:

- float l with a default value of 3.0 (length).
- float w with a default value of 5.0 (width).
- float h with a default value of 7.0 (height).

4.Define a member function display that takes a float parameter a (representing the volume of the cuboid) and displays the volume using cout.

5.In the main function:

6.Create an instance of the cuboid class named c1 with default dimensions.

7.Calculate the volume of the cuboid using the formula volume = length * width * height, where length, width, and height are the data members of the c1 object.

8.Store the calculated volume in a float variable vol.

9.Call the display member function of the c1 object, passing vol as an argument to display the volume.

- **Take input from user**

1.Include the necessary header file for input and output operations, i.e., <iostream>.

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout.

3.Define a class named cuboid with the following public member functions:

4.float calculate(float a, float b, float c): This function takes three float parameters representing the length, breadth, and height of the cuboid, calculates the volume using the formula volume = a * b * c, and returns the calculated volume as a float.

5.float display(float a): This function takes a float parameter a (the calculated volume) and displays it using cout.

6.In the main function:

7.Create an instance of the cuboid class named c1.

8.Declare float variables l, b, and h to store the length, breadth, and height of the cuboid.

9.Prompt the user to enter the length, breadth, and height of the cuboid.

10.Read the values entered by the user into the variables l, b, and h.

11.Calculate the volume of the cuboid by calling the calculate member function of the c1 object, passing l, b, and h as arguments, and store the result in the variable vol.

12.Call the display member function of the c1 object, passing vol as an argument, to display the calculated volume.

- **shapes_vol_class**

1.Include the necessary header file for input and output operations, i.e., <iostream>.

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout.

3.Define a class named shapes with the following public data members for dimensions of various shapes:

double h, double wid, double len for a cuboid.
double s for a cube.
double r for a sphere.

4.Define constructors for each shape:

cuboid(): Prompt the user to enter the dimensions (height, width, length) of a cuboid and read them into the respective class members.

cube(): Prompt the user to enter the dimension (side length) of a cube and read it into the class member.

sphere(): Prompt the user to enter the dimension (radius) of a sphere and read it into the class member.

5.Define member functions to calculate the volume of each shape:

double cuboid_volume(): Calculate the volume of the cuboid using the formula volume = h * wid * len, display it, and return the volume.

double cube_volume(): Calculate the volume of the cube using the formula volume = s * s * s, display it, and return the volume.

double sphere_volume(): Calculate the volume of the sphere using the formula volume = 4/3 * π * r^3, display it, and return the volume.

double cone_volume(): Calculate the volume of the cone (although the formula is incorrect, it should be fixed), display it, and return the volume.

5.In the main function:

Create instances of the shapes class for a cuboid, cube, and sphere.

Use the constructors to input the dimensions of each shape.

6.Calculate the volumes of each shape using their respective member functions and store the results in variables vCu, vC, and vS.

## **OUTPUT**

1.![exp11_1](https://github.com/Purvansha022609/Classes-and-Objects/assets/139473344/340762cd-6565-4c0f-b094-6bef901d8c2a)

2.![exp11_2](https://github.com/Purvansha022609/Classes-and-Objects/assets/139473344/2c8d80b3-22fd-4484-89c6-daea6d06d169)

3.![exp11_3](https://github.com/Purvansha022609/Classes-and-Objects/assets/139473344/d4d915da-7acc-4cee-a432-5f8ddc0f1052)
# **Constructor_Overloading**

## **THEORY**

To understand constructor overloading in C++, we first need to understand what constructors are. When we create a class object, the constructors are unique methods that are automatically invoked. We use constructors to initialize valid values to an object's data members. In C++, we can have many constructors in the same class as long as they all have a different list of arguments. This concept is called Constructor Overloading and is quite similar to function overloading. A constructor is called depending on how many and what kind of arguments are passed.

Types of Constructors

There are three types of constructors.

1. **Default Constructor**

The constructor that does not take any argument or all the arguments it takes are default variables and is referred to as the default constructor. It does not have function parameters. It is also known as a zero-argument constructor.

Syntax

class ClassName

{

public:

ClassName()// Default constructor

{
    ....
}

// Other member functions.

};

2.**Parameterized Constructor**
   
A constructor which has parameters are known as parameterized constructor. In contrast to the default constructor, it has parameters (or arguments) in the constructor definition and declaration. Multiple arguments can also pass through a parameterized constructor. This type of constructor is frequently used for overloading and initializing multiple data elements of objects with different initial values.

Syntax

class ClassName

{

public:

ClassName(data_type variable)  // Parameterized constructor.

{
    ....
}

// Other member functions.

};

3. Copy Constructor
   
Constructors in which we initialize the class object using another object of the same class is called copy constructor. It is used to initialize the members of a newly created object by copying the members of an already existing object.

Syntax

class ClassName

{
    public:
        ClassName(const ClassName & old_object) // Copy constructor.
        
    {
        ....
    }
    
    // Other member functions.
    
};

## **ALGORITHM**

- *Constructor Overloading Algorithm*:

1.Start

2.Define a class with multiple constructor declarations, each with a different parameter list. These constructors may have different numbers or types of parameters.

3.Inside each constructor, initialize the object's member variables using the provided arguments.

4.Optionally, perform any necessary initialization or validation logic inside the constructors.

5.Create objects of the class by specifying different sets of arguments when invoking the constructors.

6.When creating an object, the compiler will determine which constructor to call based on the number and types of arguments provided.

7.Use the objects to access member variables and member functions as needed.

8.End

## **OUTPUT**


![exp13_1](https://github.com/Purvansha022609/Constructors-Overloading/assets/139473344/e8df6652-a2e9-4564-91fd-0d7832690d8d)


# **Basic_Constructors-Destructors**

## **THEORY**

 **Constructor in C++**

A Constructor is a special member function of a class and shares the same name as of class, which means the constructor and class have the same name. Constructor is called by the compiler whenever the object of the class is created, it allocates the memory to the object and initializes class data members by default values or values passed by the user while creating an object. Constructors don’t have any return type because their work is to just create and initialize an object.

Syntax of Constructor:

class scaler
{
  
  public:
  // Constructor
  
    scaler()
    { 
    
   // Constructor body.
   
    }
    
};

 **Destructor in C++**

A Destructor is a member function that is instantaneously called whenever an object is destroyed. The destructor is called automatically by the compiler when the object goes out of scope, i.e., when a function ends, the local objects created within it are also destroyed. The destructor has the same name as the class name, but the name is preceded by a tilde(~). A destructor has no return type and receives no parameters.

Syntax of Destructor:

class scaler

{

  public:
  
   //constructor
   
    scaler();
    
   //destructor
   
    ~scaler(); 
    
};

## **ALGORITHM**

- **Default constructor**

1.Include the necessary header file for input and output operations, i.e., <iostream>.

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout and cin.

3.Define a class named student with the following private data members:

4.int rollno to store the student's roll number.

5.char name[50] to store the student's name (as a character array).

6.double fee to store the student's fee.

7.Define a constructor for the student class:

8.The constructor prompts the user to enter the roll number, name, and fee using cout and cin. It reads the input values into the respective data members.
Define a public member function display:

9.The display function is used to display the student's information, including roll number, name, and fee. It uses cout to print these values.
In the main function:

10.Create an instance of the student class named s. This invokes the constructor, prompting the user to input student information.

11.Call the display member function of the s object to display the student's information.

- **Defining the constructor inside the class**

1.Include the necessary header file for input and output operations, i.e., <iostream>.

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout and cin.

3.Define a class named date with the following private data members:

- int d to store the day.
- int m to store the month.
- int y to store the year.

4.Define an inline constructor for the date class:

5.The constructor is automatically invoked when an instance of the class is created.

6.It prompts the user to enter the day, month, and year using cout and cin. It reads the input values into the respective data members.

7.Define a public member function display:

8.The display function is used to display the day, month, and year using cout.

9.In the main function:

10.Create an instance of the date class named d2. This invokes the constructor, prompting the user to input the date.

11.Call the display member function of the d2 object to display the date.

- **Defining the constructor outside the class**

1.Include the necessary header file for input and output operations, i.e., <iostream>.

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout and cin.

3.Define a class named student with the following private data members:

4.int rollno to store the student's roll number.

5.char name[50] to store the student's name (as a character array).

6.double fee to store the student's fee.

7.Declare the constructor student() and the member function display() within the class. The constructor is declared but not defined within the class.

8.Outside the class definition, define the constructor student::student():

9.The constructor is defined using the scope resolution operator :: to specify that it belongs to the student class.

10.It prompts the user to enter the roll number, name, and fee using cout and cin. It reads the input values into the respective data members.

11.Outside the class definition, define the member function student::display():

12.The display function is defined similarly using the scope resolution operator.

13.It is used to display the student's information, including roll number, name, and fee, using cout.

14.In the main function:

15.Create an instance of the student class named s. This invokes the constructor, prompting the user to input student information.

16.Call the display member function of the s object to display the student's information.


- **Write the parametrised constructor**

1.Include the necessary header file for input and output operations, i.e., <iostream>.

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout.

3.Define a class named construct with the following private data members:

- int a to store an integer value.
- int b to store another integer value.
- Declare a parameterized constructor within the class:

4.The constructor takes two integers, int m and int n, as parameters.

5.Inside the constructor, it assigns the value of m to the data member a and the value of n to the data member b. This initializes the object's a and b with the values passed during object creation.

6.Define a member function display within the class:

7.The display function is used to display the values of a and b using cout.

8.In the main function:

9.Create an instance of the construct class named p and pass the values 10 and 20 as arguments to the constructor. This initializes a to 10 and b to 20 for the p object.

10.Call the display member function of the p object to display the values of a and b.

- **Copy of constructor**

1.Include the necessary header file for input and output operations, i.e., <iostream>.

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout.

3.Define a class named Wall with the following private data members:

- double length to store the length of the wall.
- double height to store the height of the wall.
- Define a parameterized constructor within the class:

4.The constructor takes two double parameters, double len and double hgt, to initialize the length and height data members of the Wall object.

5.Define a copy constructor within the class:

6.The copy constructor takes a reference to a Wall object, Wall& obj, as a parameter.

7.It initializes the data members of the current Wall object with the values from the obj object, effectively creating a copy of the obj object.

8.Define a member function calculateArea within the class:

9.The calculateArea function calculates the area of the wall using the formula area = length * height.

10.It returns the calculated area as a double.

11.In the main function:

12.Create an instance of the Wall class named wall1 with a length of 10.5 and a height of 8.6 using the parameterized constructor.

13.Create another instance of the Wall class named wall2 and initialize it with the values from wall1 using the copy constructor.

14.Calculate and print the area of both wall1 and wall2 using the calculateArea member function.

- **The use of constructors and destructors in C++**

1.Include the necessary header file for input and output operations, i.e., <iostream>.

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout.

3.Declare a global integer variable count and initialize it to 0. This variable will be used to keep track of the number of destruct objects created.

4.Define a class named destruct with a constructor and a destructor:

- The constructor increments the count variable and prints the current count when a destruct object is created.
- The destructor decrements the count variable and prints the current count when a destruct object is destroyed.
- In the main function:

5.Create three instances of the destruct class: aa, bb, and cc. This will invoke the constructor three times and increment the count variable.

6.Create a block scope using curly braces {} to create a new scope.

7.Inside this block scope, create an instance of the destruct class named dd. This will invoke the constructor and increment the count variable.

8.When the block scope ends, the dd object goes out of scope, and its destructor is automatically called, decrementing the count variable.

9.Finally, return 0 to end the program.

### **OUTPUT**
1.![exp12_7](https://github.com/Purvansha022609/Constructors-and-Destructors/assets/139473344/768c644e-6e83-4f67-9936-1e2f175999d0)

2.![exp12_1](https://github.com/Purvansha022609/Constructors-and-Destructors/assets/139473344/dbdbcd0e-2ae8-4879-81c9-1b7b79f339d8)

3.![exp12_2](https://github.com/Purvansha022609/Constructors-and-Destructors/assets/139473344/62a5b600-eb84-4caa-b496-00bd7b0be62a)

4.![exp12_3](https://github.com/Purvansha022609/Constructors-and-Destructors/assets/139473344/606513b4-5c95-4a5a-b258-e17d68505422)

5.![exp12_4](https://github.com/Purvansha022609/Constructors-and-Destructors/assets/139473344/61d1d3fd-62ea-4d8c-bdc6-a771080e848a)

6.![exp12_5](https://github.com/Purvansha022609/Constructors-and-Destructors/assets/139473344/a72c6fd6-8166-49bd-bd21-350a1e75f335)
