/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class Twins_160A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] arr = new int[n];
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            arr[i] = scan.nextInt();
            sum += arr[i];
        }

        solve(arr, n, sum);
    }        

    public static void solve(int[] arr, int n, int totalSum)
    {
        Arrays.sort(arr);
        int count = 0, sum = 0;
        for(int j=n-1; j>=0; j--)
        {
            int x = totalSum - sum;
            if(sum <= x)
            {
                sum += arr[j];
                count++;
            }
            else
                break;
        }
        System.out.println(count);
    }
}
