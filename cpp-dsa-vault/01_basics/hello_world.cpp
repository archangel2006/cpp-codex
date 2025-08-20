// 20Aug,2025

// A. BASICS

// Necessary header files for input output functions

#include <iostream>
using namespace std;

// main() function : C++ execution begins

int main(){

    cout << "Hello World!";   // Print
    
    return 0;
}





// B. C++ SYNTAX

#include <iostream>

//Standard Namespace
using namespace std; 

//Main Function
int main(){

    //Declaration of Variable
    int num1 = 24; 
    int num2 = 34;

    int result = num1+num2;

    // Output
    cout << result << endl;

    
    return 0;
}


//--------

/*  1. OUTPUT
        (To write and run C++ programs, need to set up the local environment on your computer.)

    2. COMMENTS
        - Single Line //
        - Multi Line /*
        - Ctrl + /

    3. PREPROCESSOR DIRECTIVES
        #include <iostream> : a preprocessor directive that tells compiler to include the content of file in source code

    4. HEADER FILES
        - file that contains features like functions, data types, macros... 
        - that can be used by another C program by including that particular header file using #include preprocessor
        - generally end with ".h" extension

        #include <iostream>
        #include <string.h>

    5. NAMESPACE
        - used to group logically related functions, variables and other entities to avoid name conflicts.
        - using namespace std : space where inbuilt features of C++ are declared.

    6. MAIN FUNCTION
        - main() : entry point of evry C++ program. 
        - when program is executed the code in main functions are executed first.
    
    7. BLOCKS
        - group of statements that are enclosed within {} braces.
        - { : beginning of main function
        - } : ending of main function

    8. OUTPUT STATEMENT
        - cout : used to display output on console screen.
        - followed by << "____" ; 

    9. RETURN STATEMENT
        - return value from function.
        - indicates the finishing of a function.
        - send a signal of sucessful execution of main function

    10. SEMICOLONS
        - ; : used to terminate each line of the statement of the program

    11. IDENTIFIERS
        - for naming the variables, functions and user defined data types.
        - uppercase, lowercase characters, underscore, adn digits.
        - first letter : underscore or alphabet.

    12. KEYWORDS
        - reserved words 
        - can't be used for identifiers
        - int, returm, using etc..
        

*/


//--------




// C. OBJECT ORIENTED PROGRAMMING 

using namespace std;

class Calculate {
    
    // Access Modifiers
public:

    // data member
    int num1 = 50;
    int num2 = 30;

    //member function
    void addition() {
        int result = num1 + num2;
        cout << result << endl;
    }
};

int main() {
    
    // object declaration
    Calculate add;

    // member function calling
    add.addition();

    return 0;
}


/*
    1. CLASS
        - user-defined data type
        - has its own attributes (data members) & beahavior (member functions)

    2. CLASS MEMBERS
        - The attributes or data in the class are defined by the data members and member functions that work on these data members are called the member functions.

    3. OBJECT
        - instance of a class
        - - the class itself is just a template that is not allocated any memory.
*/


// D. TOKENS

/* - smallest units in a program
   - building blocks of C program
   - to form valid expressions & statements */