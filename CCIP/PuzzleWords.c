/*
It's a puzzle doesn't need explanation.

Input Format

string s

Constraints

Nothing

Output Format

In the form of String

Sample Input 0

hello@
Sample Output 0

HELLO@
Sample Input 1

@%@5@5@
Sample Output 1

@%@5@5@
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char a[100];
    int i;
     gets(a);
    for(i=0;i<strlen(a);i++)
    {
    if(a[i]>='a'&& a[i]<='z')
    a[i]^=32;
   
    }
     printf("%s\n",a);

    return 0;
}
