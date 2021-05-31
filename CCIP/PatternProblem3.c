/*
Print the corresponding pattern for different values of ‘n’

Input Format

Enter the value of ‘n’.

Constraints

1<= n <= 10

Output Format

Print the required pattern

Sample Input 0

3
Sample Output 0

***
**
*

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
