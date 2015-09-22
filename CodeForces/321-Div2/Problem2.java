/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class Problem2
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        long d = scan.nextLong();
        long[] arr1 = new long[n];
        long[] arr2 = new long[n];
        long maxSum = 0;

        for(int i=0; i<n; i++)
        {
            long x = scan.nextLong();
            long y = scan.nextLong();
            arr1[i] = x;
            arr2[i] = y;
        }

        for(int i=0; i<n; i++)
        {
            long sum = arr2[i];
            for(int j=i+1; j<n; j++)
            {
                if(Math.abs(arr1[j] - arr1[i]) < d)
                    sum += arr2[j];
                else
                    break;
            }
            if(sum >= maxSum)
                maxSum = sum;
        }
        System.out.println(maxSum);
    }        
}
