//369Problem
//A number is said to be a 369 number if
//The count of 3s is equal to count of 6s and the count of 6s is equal to count of 9s. The count of 3s is at least 1. For Example 12369, 383676989, 396 all are 369 numbers whereas 213, 342143, 111 are not.
//Given A and B find how many 369 numbers are there in the interval [A, B]

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int c3 = 0, c6 = 0, c9 = 0, count = 0;
  int i, r, j;
  int a, b;
  scanf ("%d", &a);
  scanf ("%d", &b);
  for (i = a; i <= b; i++)
    { c3=0;c6=0;c9=0;
      for (j = i; j > 0; j = j / 10)
    {
     
      r = j % 10;

      if (r == 3)
        {
          c3++;

        }
      if (r == 6)
        {
          c6++;

        }
      if (r == 9)
        {
          c9++;
         
        }

        
     
    }
     if (c3 == c6 && c3 == c9)
        {
            if(c3!=0)
            {

      count++;
}
        }
   
    }
  printf ("%d", count);
    return 0;
}
