/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class RomaLuckyNumbers_262A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        int count = 0;

        for(int i=0; i<n; i++)
        {
            int x = scan.nextInt();
            if(lucky(x) <= m)
                count++;
        }
        System.out.println(count);
    }        

    public static int lucky(int x)
    {
        int luckyDigits = 0;
        while(x != 0)
        {
            if((x%10 == 4) || (x%10 == 7))
                luckyDigits++;
            x = x/10;
        }
        return luckyDigits;
    }
}
