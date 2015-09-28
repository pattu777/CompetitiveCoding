/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class ProblemC
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        long k = scan.nextLong();
        int[] arr = new int[n];

        for(int i=0; i<n; i++)
            arr[i] = scan.nextInt();

        System.out.println(solve(arr, n, 0, k));
    }

    public static int solve(int[] arr, int n, int loc, long unit)
    {
        if(loc == n-1)
            return (arr[loc]+unit)/10;
        else
            return Math.max(arr[loc]/10 + solve(arr, n, loc+1, unit), (arr[loc]+(10-(arr[loc]%10)))/10 + solve(arr, n, loc+1, unit-(10-(arr[loc]%10))));
    }
}
