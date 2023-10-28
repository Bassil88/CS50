//Integers (int): Used to represent whole numbers, positive or negative, without any decimal point.

int number;
number = 123

//Floating-Point Numbers (float): These represent real numbers (numbers with a fractional part), including numbers with a decimal point.
float weight = 65.5;

//Double: The double data type is used to store double-precision (twice the precision of a standard float) floating-point values. It is typically used when higher precision is needed for representing fractional or decimal numbers.
double myDouble = 3.14159;


//Characters (char): Used to represent a single character, like 'a', 'B', '5', or special characters like '$', '#', etc.
char grade = 'A';




//Strings: A sequence of characters. In CS50, strings are often represented as an array of characters in C, terminated with a null character '\0'.
char name[] = "John";



//Booleans (bool): This data type represents true or false values.
int isTrue = 1; // 1 represents true
int isFalse = 0; // 0 represents false


//Void: Denotes absence of type. For example, in functions that return nothing, the return type is often 'void'.
void myFunction() {
    // some operations
}



//Arrays: A collection of elements/values of the same data type, stored in contiguous memory locations.
int numbers[5] = {1, 2, 3, 4, 5};


//Structures (struct): A user-defined data type that allows you to group different variables under a single name.
struct Person {
    char name[50];
    int age;
};
struct Person person1 = {"Alice", 30};



//Pointers: A data type that stores the memory address of another data type.
int x = 10;
int *ptr = &x; // Pointer to an integer





