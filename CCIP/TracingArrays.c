/*
Tushar just started coding in school. He took a lecture of array and alloted a task to find the sum of first 3 elements of an array. Please help him out.

Input Format

Given the value of ‘n’ and an array of size ‘n’ as input in 2 separate lines.

Constraints

1<= n <= 20

Output Format

Print the obtained sum

Sample Input 0

4
2 8 1 5
Sample Output 0

11
Sample Input 1

5
-3 8 -4 14 5
Sample Output 1

1
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a[100];
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
