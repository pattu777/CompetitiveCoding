/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class SwapSort_489A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        long[] arr1 = new long[n];
        long[] arr2 = new long[n];
        for(int i=0; i<n; i++)
        {
            long x = scan.nextLong();
            arr1[i] = arr2[i] = x;
        }
        solve(arr1, arr2, n);
    }        

    public static void solve(long[] arr1, long[] arr2, int n)
    {
        Arrays.sort(arr2);   
        int count = 0;
        for(int i=0; i<n; i++)
        {
            if(arr1[i] != arr2[i])
                count++;
        }
        System.out.println(count/2);
    }
}
