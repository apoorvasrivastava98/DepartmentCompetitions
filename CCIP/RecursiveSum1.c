/*
You need to find the sum of digits of a number ‘n’ using recursion.

Note: Solve this question using recursion only.

Input Format

Enter the number ‘n’.

Constraints

1<= n <= 5000

Output Format

Print the sum

Sample Input 0

499
Sample Output 0

22
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,r,sum=0;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        r=i%10;
        sum=sum+r;
    }
    printf("%d",sum);
    return 0;
}
