/*
Arjun was working on a research paper based on binary number system. He designed an algorithm to find maximum number of consecutive set bits in the binary array.

Binary array is an array that contains only 0’s & 1’s.

Input Format

Given the value of ‘n’ an array of size ‘n’ as input in two separate lines.

Constraints

1<= n <= 20

Output Format

Print the integer output.

Sample Input 0

4
0 0 0 0
Sample Output 0

0
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max(a,b) (((a)>(b))?(a):(b))

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a[100],n,i,c=0,r=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for (i = 0; i < n; i++)
    {
       
        if (a[i] == 0)
            c = 0;
  
        else
        {
            c++;
            r = max(r, c);  // Without this max condition it will always return last value of c and not the max value
        }
    }
  
    printf("%d",r);
    return 0;
}
