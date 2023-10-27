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
