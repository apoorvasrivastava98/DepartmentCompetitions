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

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
Scanner sc=new Scanner(System.in);
        String na=new String();
        na=sc.nextLine();
        int l=na.length();
        int i,f=0;
        char ch,ch1;
        for(i=0;i<l-1;i++)
        {
            ch=na.charAt(i);
            ch1=na.charAt(i+1);
            if(ch>=65 && ch<=90)
            {
                if(ch1>=65 && ch<=90)
                {
                    f=1;
                   
                }
            }
        }
        if(f==0)
        {
            System.out.print("No");
        }
        if(f==1)
        {
            System.out.print("Yes");
        }
    }
}
