/*
In a round table conference the comissioner decided to meet with ‘n’ junior fellows. All the fellows along with commisioner will sit around a table. In how many ways they can sit around the table.

Input Format

Enter the value of ‘n’

Constraints

5 <= n <=10

Output Format

Print the output.

Sample Input 0

6
Sample Output 0

720
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,f=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("%d",(f/2));
    return 0;
}
