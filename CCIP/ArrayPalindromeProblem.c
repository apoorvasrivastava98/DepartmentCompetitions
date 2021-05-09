/*
Priyanka got an array as input and assigned a task to verify that the reversal of array gives the same array or not. If array and its reverse version both are same then print “ Verified” else print “ Not Verified”.

Input Format

Given the value of ‘n’ an array of size ‘n’ as input in two separate lines

Constraints

1<= n <= 20

Output Format

Print the output as Verified or Not Verified.

Sample Input 0

4
1 2 2 1
Sample Output 0

Verified
Sample Input 1

4
9 5 4 2
Sample Output 1

Not Verified
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a[100],n,i,j,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=n-1;i< n/2,j>=n/2;i++,j--) 
    {
      if(a[i]!=a[j]) 
      {
         f = 1;
         break;
      }
   }
    if (f==1)
    {
        printf("Not Verified");
    }
   else
   {
       printf("Verified");
   }
   
    return 0;
}
