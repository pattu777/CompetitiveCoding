/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class LuckyTicket_146A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String line = scan.nextLine().trim();
        int size = Integer.parseInt(line);
        line = scan.nextLine().trim();

        if(isLucky(line, size))
            System.out.println("YES");
        else
            System.out.println("NO");
    }   

    public static boolean isSumLucky(int num, int size)
    {
        int sum1 = 0, sum2 = 0, count = 1;
        while(num != 0)
        {
            int x = num % 10;
            if(count > size/2)
                sum2 += x;
            else
                sum1 += x;
            count++;
            num = num / 10;
        }
        if(sum1 != sum2)
            return false;
        return true;
    }

    public static boolean isLucky(String str, int size)
    {
        int count = 1, sum1 = 0, sum2 = 0;
        
        for(int i=size-1; i>=0; i--, count++)
        {
            int x = Character.getNumericValue(str.charAt(i));
            if((x != 4) && (x != 7))
                return false;
            if(count > size/2)
                sum2 += x;
            else
                sum1 += x;
        }

        if(sum1 != sum2)
            return false;
        return true;
    }
}
