/*
An array is magical if first and last element is even and sum of all elements is odd. If array is magical print ‘Yes’ otherwise ‘No’.

Input Format

Input an the size of array and array in two different lines.

Constraints

1 <= n < =20

Output Format

Print ‘Yes’ or ‘No’ accordingly.

Sample Input 0

5
2 3 5 3 2
Sample Output 0

Yes
Sample Input 1

4
1 2 3 5
Sample Output 1

No
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a[100];
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    if((sum%2!=0) && (a[0]%2==0) && (a[n-1]%2==0))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
        
    return 0;
}
