//Conditional statements

//If Statements:
//if statements are used to execute a block of code only if a specified condition is true.
int x = 10;
if (x > 5) {
    // This block of code will execute if x is greater than 5
    printf("x is greater than 5");
}

//If-else Statements:
//if-else statements allow the program to execute one block of code if the condition is true and another block if the condition is false.
int age = 20;
if (age >= 18) {
    printf("You are an adult");
} else {
    printf("You are not an adult");
}




//Nested If Statements:
//These are if statements within another if statement. They are used for more complex decision-making based on multiple conditions.
int num = 15;
if (num > 10) {
    if (num < 20) {
        printf("The number is between 10 and 20");
    }
}





//Else-If Ladder:
//else if statements allow you to test multiple conditions and execute a block of code as soon as one of the conditions is true.
int number = 5;
if (number > 0) {
    printf("Number is positive");
} else if (number < 0) {
    printf("Number is negative");
} else {
    printf("Number is zero");
}






//Conditionals with switch
    int x = GetInt();

    switch (x) {
        case 1:
            printf("One!\n");
            break;
        case 2:
            printf("Two!\n");
            break;
        case 3:
            printf("Three!\n");
            break;
        default:
            printf("Sorry!\n");
    }



// without break
    int x = GetInt();

    switch (x) {
        case 5:
            printf("Five, ");
        case 4:
            printf("Four, ");
        case 3:
            printf("Three, ");
        case 2:
            printf("Two, ");
        case 1:
            printf("One, ");
        default:
            printf("Blast-off!\n");
    }



//ternary operator

//instead of↓↓↓↓↓
intx;
if (expr)
{
  x = 5;
}
else
{
  x = 6;
}

int x = (expr) ? 5 : 6;


// in Summery:
// if (and if-else, and if-else if-...-else): use Booolen expressions to make decisions.

// switch: use discrete cases to make decisions.

// ?: ternary operator use to replace a very simple if-else to make code look fancy.
