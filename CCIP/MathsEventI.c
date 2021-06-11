/*
Given two martix of size (M X N) & (N X P). Find out the number of multiplication operation require to multiply two matrices.

Input Format

Enter the value of M,N & P.

Constraints

1 <= M,N,P <= 10

Output Format

Print the desired output

Sample Input 0

3 2 3
Sample Output 0

18
Sample Input 1

2 2 3
Sample Output 1

12
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("%d",(a*b*c));
    return 0;
}
