/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class Guy_469A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int levels = scan.nextInt();
        
        int x_l = scan.nextInt();
        int[] x_s = new int[x_l];
        for(int i=0; i<x_l; i++)
            x_s[i] = scan.nextInt();

        int y_l = scan.nextInt();
        int[] y_s = new int[y_l];
        for(int i=0; i<y_l; i++)
            y_s[i] = scan.nextInt();

        Arrays.sort(x_s);
        Arrays.sort(y_s);
        solve(levels, x_l, y_l, x_s, y_s);
    }

    public static void solve(int levels, int x_l, int y_l, int[] x_s, int[] y_s)
    {
        boolean val = true;
        for(int i=1; i<=levels; i++)
        {
            if((Arrays.binarySearch(x_s, i) < 0) && (Arrays.binarySearch(y_s, i) < 0))
                val = false;
        }
        if(val)
            System.out.println("I become the guy.");
        else
            System.out.println("Oh, my keyboard!");
    }
}
