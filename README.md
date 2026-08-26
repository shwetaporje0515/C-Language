# C-Language

## C Language : 

C is a powerful, general-purpose programming language developed by Dennis Ritchie. It is widely used for system programming, embedded systems, operating systems, and application development. C provides low-level memory access, making it fast, efficient, and the foundation for many modern programming languages.
Developer : Dennis Ritchie
Year : 1972
DEveloped at : Bell laboratories
Purpose : To develop the UNIX operating system
 
## Features of C Language : 
  * Simple and easy to learn
  * Fast execution speed
  * Portable (runs on different operating systems)
  * Structured programming language
  * Supports functions (modular programming)
  * Rich set of built-in operators
  * Efficient memory management using pointers
  * Supports recursion
  * Dynamic memory allocation
  * Middle-level language (supports both high-level and low-level programming

## Toolchain in C :

  Editor -> Compiler -> linker -> Executable file (exe) -> Loader -> Programs Runs


## DataTypes :
  There are 3 types of datatypes in c -
  * Predifined (Premitive) Datatypes
  * Derived Datatypes
  * User - defined Datatypes

## Predifined (Premitive) Datatypes :
    The data types which are created / provided by the language designer
    They are : int, char, float, Double, Bool, void

## Derived Datatypes :
    The data types which are created from other datatype
    They are :
     * Array
     * Pointer
     * Function

## Array :
    Array is considered as a Derived Datatype, it is the collection of homogeneous(same) elements.
    There are 3 types of array : 
    1-D array, 2-D array, Multidimentional array

## Pointer(*) :
    Pointer is considered as a Derived Datatype, It is a variable which stores the address.

## Function : 
    Function is also a derived datatype. It is a block of code which performs a specific task, without repeating the code again and again we call it whenever we need.
    There are two types of Functions : 
    1. Library functions : Functions which are defined previously.
    2. User-defined functions : Functions which are defined depending on user's need.

## User - defined Datatypes : 
    The data types which are created depending on the need / requirement of user
    They are : 
    * Structure
    * Union
    * Enumeration

## Struct : 
    Struct is a user-defined datatype
    It stores heterogeneous types of data in it.
    Memory is allocated to each datatype after creating the object of that struct.

## Union :
    Union is similar as struct. it is also a user-defined datatype
    The difference is union allocates the memory to the large datatype only.

## Enumeration : 
    Enumeration (enum) is also considered as a user-defined datatype.
    It is used to give the name to the integral constant.
    After giving name to integral constant our program looks more readable.

## Operators in C :
    Operators are symbol used to perform operations on variable and values.

   ## Types of operators : 
     * Arithmetic : Used for mathematical calculations
     * Relational : Used to compare two va;ues
     * Logical : Used to combine condition
     * Assignment : Used to assign values
     * Conditional : Used as a shortform of IF--- ELSE
     * Increment / Decrement : To add value by 1 and to subtract value by 1
     * Bitwise : Used to perform operations on binary(bits).
     * Sizeof : Used to find size of datatypeor variable

## If statement :
    If is used to check condition. If condition is TRUE, the code inside of 'IF' will run.

## If Else Statement : 
    If...Else checks a condition.
    if the condition is TRUE, 'IF' block runs otherwise, 'ELSE' block runs

## Elseif Statement :
    Elseif is used to check more than one condition 

## LOOPS :
    - FOR loop
    - WHILE loop
    - DO WHILE loop

## FOR Loop :
    - A For loop repeats the code, a fix number of times

## WHILE Loop :
    - A While loop repeats the code while the condition is TRUE

## DO WHILE loop :
    - A DO while loop is used to repeat a block of code at least one time, even if condition is FALSE

## Nested For loop :
    - A nested For loop means one for loop inside another For loop
    - syntax : 
          for(condition)
          {
            for(condition)
            {
               //code
            }
          }

## String :
       - A string is a collection of characters enclosed in double quotes(" ") 
       - In C, a string is stored in a character array(char) and ends with a special character - '/0' (null character)


## Variable :
       - A variable is a name that stores the value.
       - Value can change, which is why it is called as variable

       - There are Two types of variable :
           1. Global variable
           2. Local variable

       1. Global variable :
          - A Global variable is a variable that is created outside all functions
          - It can be used throughout the program

       2. Local variable :
          - A Local variable is a variable that is created inside a function or block
          - It can only used within that function or block

## Switch Case :
    - A Switch case is a decision making statement that checks the value of a variable and executes the matching block of code
    - Syntax : 
          switch(variable)
          {
             case value1:
             //code
             break

             case value2
             //code
             break

             default
             //code
          }


## Dynamic memory allocation :
     Dynamic memory allocation means allocating memory while the program is running

     Types of memory allocation :
     1. malloc
     2. calloc
     3. realloc

     1. malloc :
        - malloc(memory allocation)
        - malloc allocates a block of memory at runtime the memory contains garbage value
        -syntax : 
           pointer = (data-type*)malloc(number_of_elements * sizeof(data_type));

     2. calloc :
        - calloc (contiguous allocation)
        - calloc allocates memory and initializes all value to zero
        - syntax :
            pointer = (data-type*)calloc(number_of_elements * sizeof(data_type));

     3. realloc :
        - realloc (re-allocation)
        - realloc changes the size of already allocated memory
        - syntax :
             pointer = (data-type*)calloc(pounter,new_size);

## Recursion :
      - Recursion is a programming technique where a function calls itself to solve a problem by breaking it into smaller subproblems
      - Structure of a recursion function
         1. Base case : stops the recursion
         2. Recursive case : Calls the function itself with a smaller or simpler input

      - Types of recursion :
        1. Direct
        2. Indirect
        3. Tail
        4. Non-tail
