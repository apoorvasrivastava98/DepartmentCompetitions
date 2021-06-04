/*
Rashu got a task to match the characters inside the string. She got two different string as input and verify that if both have same length then the first three characters of both the strings are same or not. If same then print ‘Yes’ else print ‘No’.

Input Format

Enter two different strings of length ‘n’ separated by spaces.

Constraints

1<= n <= 20

Output Format

Print ‘Yes’ or ‘No’

Sample Input 0

aryan ary@@
Sample Output 0

Yes
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char a[50];
    gets(a);
    int len=strlen(a);
    int i,j,k,c=0,len1=0,len2=0;
    for(i=0;i<len;i++)
    {
        if(a[i]==' ')
        {
           k=i+1;
        }
    }
    len1=k-1;
    len2=len-k;
    if(len1==len2)
    {
        for(i=0,j=k;i<3;i++,j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==3)
        {
            printf("Yes");
        }
    }
    else
    {
        printf("No");
    }
    return 0;
}
