/*
1,2,4,8,16...... for(n=2)

1,3,9,27,81,..... for(n=3)

1,4,16,64,256,.... for (n=4)

Print the eighth term of the series.

Input Format

Enter the value of ‘n’.

Constraints

1 <= n <= 8

Output Format

Print the eighth term.

Sample Input 0

2
Sample Output 0

128
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,temp=0;
    scanf("%d",&n);
        temp=pow(n,7);
    printf("%d",temp);
    return 0;
}
