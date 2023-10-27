#inclue <Cs50.h>
#inclue <stdio.h>

int main( void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");

    printf("%li/n", x + y);
}

// in the terminal type
// make calculator
// ./calculator
// x: 2000000000
// y: 2000000000
// 4000000000


//____________________________________________________________________

//truncation:

#inclue <Cs50.h>
#inclue <stdio.h>

int main( void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");

    float z = (float) x/ (float) y;
    printf("%f/n", x / y);
}

// in the terminal type
// make calculator
// ./calculator
// x: 1
// y: 3
// 0.33333




//if wanna see more floating digit↓↓↓↓↓↓

#inclue <Cs50.h>
#inclue <stdio.h>

int main( void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");

    double z = (double) x/ (double) y;
    printf("%f/n", x / y);
}

// in the terminal type
// make calculator
// ./calculator
// x: 1
// y: 3
// 0.3333333333333331483
