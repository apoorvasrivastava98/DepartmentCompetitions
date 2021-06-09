/*
Given two different sets ‘A’ & ‘B’ of Integers with ‘n’ & ‘m’ elements respectively. Find the number of one-one functions possible.

Input Format

Enter the value of ‘n’ & ‘m’ separated by space.

Constraints

1 <= n,m <=10

Output Format

Print the output.

Sample Input 0

5 4
Sample Output 0

120
Sample Input 1

5 3
Sample Output 1

60
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m,fm=1,fn=1,i,p=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=(n-m);i++)
    {
        fm=fm*i;
    }
    for(i=1;i<=n;i++)
    {
        fn=fn*i;
    }

    p=fn/fm;
    printf("%d",p);
    return 0;
}
