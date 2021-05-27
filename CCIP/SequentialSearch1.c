/*
Karan got a task to find the index of a particular element ‘k’. Help him out. In case of repeatetion print the index of first occurence of number.

Input Format

Enter the array of size ‘n’, element to search’k’, and array[] in three different lines.

Constraints

1<= n <= 20

Output Format

Print the index of element.

Sample Input 0

5
6
2 4 6 9 7
Sample Output 0

2
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,k,i;
    int a[100];
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
