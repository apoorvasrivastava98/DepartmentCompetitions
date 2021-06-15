/*
Solve the following series by observing the reuired patterns.

1 + 2 + 3 + 4 + 5 + 6 = 90

2 + 6 + 9 + 5 + 8 + 1 = 238

9 + 4 + 2 + 3 + 5 + 7 = ?

Input Format

Input contain of 6 numbers.

Constraints

No more constraints

Output Format

Print the desired output

Sample Input 0

1 2 3 4 5 6
Sample Output 0

90
Sample Input 1

2 6 9 5 8 1
Sample Output 1

238
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int a[6],i,s1=0,s2=0;
    for(i=0;i<6;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++)
    {
        if(i<3)
        {
          s1=s1+a[i];
        }
        else
        {
            s2=s2+a[i];
        }
    }
    printf("%d",(s1*s2));
    return 0;
}
