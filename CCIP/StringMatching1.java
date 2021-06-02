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
    int i,j,k=0,c=0,len1=0,len2=0;
    char ch,ch1;
    for(i=0;i<na.length();i++)
    {
        ch=na.charAt(i);
        if(ch==' ')
        {
           k=i+1;
        }
    }
    len1=k-1;
    len2=(na.length())-k;
    if(len1==len2)
    {
        for(i=0,j=k;i<3;i++,j++)
        {
            ch=na.charAt(i);
            ch1=na.charAt(j);
            if(ch==ch1)
            {
                c++;
            }
        }
        if(c==3)
        {
            System.out.println("Yes");
        }
    }
    else
    {
        System.out.println("No");
    }
    }
}
