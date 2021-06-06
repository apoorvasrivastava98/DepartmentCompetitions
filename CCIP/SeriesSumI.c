/*
Verify the series and print the output.

1 + 2 + 3 + 4 + 5 + 6 = 44

2 + 6 + 9 + 5 + 8 + 1 = 65

9 + 4 + 2 + 3 + 5 + 7 = ?

Input Format

Enter 6 different elements

Constraints

Number can lie between (1,20).

Output Format

Print the desired sum.

Sample Input 0

1 2 3 4 5 6
Sample Output 0

44

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
      int i,sum=0;
    int a[10];
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<6;i=i+2)
    {
        sum=sum+(a[i]*a[i+1]);
    }
    printf("%d",sum);
    return 0;
}
