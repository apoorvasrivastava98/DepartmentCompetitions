/*
Vishal got a task to verify that the given string contain “ra’ as substring or not.

Input Format

Input a string of length n.

Constraints

Nothing

Output Format

Print ‘Yes’ else ‘No’ accordingly.

Sample Input 0

aaryn
Sample Output 0

No
Sample Input 1

araa
Sample Output 1

Yes
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char a[100];
    gets(a);
    int i,f=0;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='r' && a[i+1]=='a')
        {
            printf("Yes");
            f=1;
        }
    }
    if(f==0)
    {
        printf("No");
    }
    return 0;
}
