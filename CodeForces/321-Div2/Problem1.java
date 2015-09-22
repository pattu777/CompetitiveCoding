/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class Problem1
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        long[] arr = new long[n];

        for(int i=0; i<n; i++)
            arr[i] = scan.nextLong();

        //solveUsingDP(arr, n);
        solveUsingBruteForce(arr, n);
    }        

    public static void solveUsingDP(long[] arr, int n)
    {
        int maxStart = 0;
        int max = 1;
        int start = 0;
     
        for(int i=1; i<n; i++)
        {
            if(arr[i] >= arr[i-1])
            {
                if(i-start+1 > max)
                {
                    max = i-start+1;
                    maxStart = start;
                }
            }
            else
                start = i;
        }

        System.out.println(max);
    }

    public static void solveUsingBruteForce(long[] arr, int n)
    {
        long maxLen = 1;
        for(int i=0; i<n-1; i++)
        {
            long len = 1;
            int j = i+1;
            while((j<n) && (arr[j] >= arr[i]))
            {
                i = j;
                j++;
                len++;
            }
            if(len >= maxLen)
                maxLen = len;
        }
        System.out.println(maxLen);
    }
}
