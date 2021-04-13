/* 
Ravi got a task to merge two sequences. He got a number as an input and alloted a task to print all the natural number upto ‘n’ in both forward and backward manner. To solve this issue he can use only “Recursion” approach.Recursion is calling function inside the same function.

Input Format

Accept a number ‘n’ as input

Constraints

0 <= n <= 50

Output Format

Print the natural number upto ‘n’ in both forward & backward problem.

Sample Input 0

5
Sample Output 0

1 2 3 4 5 5 4 3 2 1
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("%d",i);
    }
    for(i=n;i>0;i--)
    {
    printf("%d",i);
    }
    return 0;
}
