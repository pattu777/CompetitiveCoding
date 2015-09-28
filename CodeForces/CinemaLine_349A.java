/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class CinemaLine_349A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] coins = new int[n];
        for(int i=0; i<n; i++)
            coins[i] = scan.nextInt();

        if(solve(coins, n))
            System.out.println("YES");
        else
            System.out.println("NO");
    }        

    public static boolean solve(int[] arr, int n)
    {
        Map<Integer, Integer> m = new HashMap<Integer, Integer>();
        m.put(25, 0);
        m.put(50, 0);
        m.put(100, 0);
        for(int i=0; i<n; i++)
        {
            int x = arr[i] - 25;
            if(x == 25)
            {
                if(m.get(x) == 0)
                    return false;
                else
                {
                    m.put(x, m.get(x)-1);
                    m.put(50, m.get(50)+1);
                }
            }
            else if(x == 75)
            {
                m.put(100, m.get(100)+1);
                if((m.get(50) != 0) && (m.get(25) != 0))
                {
                    m.put(50, m.get(50)-1);
                    m.put(25, m.get(25)-1);
                }
                else if((m.get(25) >= 3) && (m.get(50)==0))
                    m.put(25, m.get(25)-3);
                else
                    return false;
            }
            else
                m.put(25, m.get(25)+1);
        }
        return true;
    }
}
