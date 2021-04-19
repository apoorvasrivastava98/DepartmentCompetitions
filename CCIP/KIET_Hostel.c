/*
We all know about KIET Hostel. The visitor wants to know if the particular apartment number is present in the Hostel or not? If the number is not found, it will display -1 else it will print the index value of the given number.

Input Format

First line will contain total number of appartments.

Second line will contain list of appartmet numbers seperated by spaces followed by total number of appartments.

Third line will contain the apartment number which user want to search.

Constraints

The total Apartment number should be positive integers between 1 and 100.

Consider indexing of apartment list will start from 0.

Output Format

one line output, if apartment number is found it will display its index otherwise it will display -1

Sample Input 0

5
1 4 34 56 7
90
Sample Output 0

-1
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,a[100],x,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            c=1;
            printf("%d",i);
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    return 0;
}
