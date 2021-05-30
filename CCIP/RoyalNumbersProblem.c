/*
Ramesh got a set of numbers and alloted a task to find the minimum of all the royal numbers present in the set if available otherwise print ‘No’. Royal numbers are those numbers which are divisible by 2,3 & 5 all three numbers.

Input Format

Enter all the numbers in the array of size ‘n’ and the value of 'n'.

Constraints

1<= n <= 20

Output Format

Print the minimum royal number.

Sample Input 0

4
32 30 62 90
Sample Output 0

30
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,min=99999,f=0;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && a[i]%3==0 && a[i]%5==0)
        {
            if(a[i]<min)
            {
                min=a[i];
                f=1;
            }
        }
    }
    if(f==1)
    {
    printf("%d",min);
    }
    else
    {
        printf("No");
    }
    return 0;
}
