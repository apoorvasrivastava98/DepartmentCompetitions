/* It's a RIIDLE doesn't need explanation.

Input Format

INPUT string s

Constraints

NOTHING

Output Format

In the form of String

Sample Input 0

hello@
Sample Output 0

HELLO@
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char str[100];
    int i;
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
    if(str[i]>='a'&&str[i]<='z')
    str[i]^=32;           // or a[i]=a[i]-32;
    }
    printf("%s\n",str);

    return 0;
}
