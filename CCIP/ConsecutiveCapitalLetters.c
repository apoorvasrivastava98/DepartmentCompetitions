/*
Kanishak got a task to find the two consecutive capital letters inside the string. If they exist return true else return false.

Input Format

Enter the string of size ‘n’.

Constraints

1<= n <= 20

Output Format

Print ‘Yes’ or ‘No’

Sample Input 0

arYAn
Sample Output 0

Yes
Sample Input 1

suDAma
Sample Output 1

Yes
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char a[20];
    gets(a);
    int i,f=0;
    for(i=0;i<strlen(a)-1;i++)
    {
        if(a[i]>=65 && a[i]<=90 && a[i+1]>=65 && a[i+1]<=90)
        {
            f=1;
            }
           
    }
    if(f==0)
    {
        printf("No");
    }
    if(f==1)
    {
        printf("Yes");
    }
    return 0;
}
