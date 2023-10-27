#include <cs50.h>
#include <stdio.h>

int main(void)
{
// Get size of grid
  int n;
  do
    {
      n = get_int("Size: ");
    }
    while (n < 1);

      // print grid fo bricks
    for ( int i = 0; i < n; i++)
        {
          for ( int j = 0; j < n; j++)
            {
              printf("#");
            }
        printf("\n");
    
        }
}


//refactoring the above into two functions
#include <cs50.h>
#include <stdio.h>

int get_Size(void);
void print_grid(int size);


int main(void)
{
  int n = get_size();
  print_gird(n);
}



int get_Size(void) //Get the size of the grid
{
  int n;
  do
    {
      n = get_int("Size: ");
    }
    while (n < 1); // as long as the input is not a negative value
    return n;
} 

void print_grid(int size) // Print Grid of bricks
{
      // print grid for bricks
    for ( int i = 0; i < n; i++)
        {
          for ( int j = 0; j < n; j++)
            {
              printf("#");
            }
        printf("\n");
    
        }
}


// in terminal
//make loops
//./loops
//size: 3
  //###
  //###
  //###
