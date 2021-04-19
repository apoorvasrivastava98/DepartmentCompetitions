/*
Kavya got the task to find the factorial of a number ‘n’ using recursion in the test, but after completing the test he think about counting the number of zeores in the factorial of number.

He solves the factorial using recursion and also find the number of trailing zeroes in the answer to get complete marks in programming.

Input Format

Enter a number ‘n’ and it should only be integer.

Constraints

0<= n <= 20

Output Format

Print the number of trailing zeroes.

Sample Input 0

8
Sample Output 0

1
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i,f=1,r,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    for(i=f;i>0;i=i/10)
    {
        r=i%10;
        if(r==0)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
