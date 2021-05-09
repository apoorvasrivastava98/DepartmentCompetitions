/*
Harish got a task to shift the values of array nder given condition that the last element of array should get raplaced with first element of array and all the other elements must shift to their left index by one position only.

Input Format

Given the value of ‘n’ an array of size ‘n’ as input in two separate lines.

Constraints

1<= n <= 20

Output Format

Provide the reaaranged array in output.

Sample Input 0

4
1 2 3 4
Sample Output 0

2 3 4 1
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a[100],n,i,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    t=a[0];
    for(i=0;i<n-1;i++)
    {
            a[i]=a[i+1];
    }
        a[n-1]=t;
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    return 0;
}
