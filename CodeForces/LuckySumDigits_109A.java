/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class LuckySumDigits_109A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int sum = scan.nextInt();

        System.out.println(solve(sum));
    }        

    public static int solve(int sum)
    {
        for(int i=4; ; i++)
        {
            int lSum = getSumDigit(i);
            if((lSum > sum) && isLucky(i))
                return -1;
            else if((lSum == sum) && isLucky(i))
                return i;
        }
    }

    public static boolean isLucky(int num)
    {
        while(num != 0)
        {
            int x = num%10;
            if((x != 4)&&(x != 7))
                return false;
            num = num/10;
        }
        return true;
    }

    public static int getSumDigit(int num)
    {
        int lSum = 0;
        while(num != 0)
        {
            int x = num%10;
            num = num/10;
            lSum += x;
        }
        return lSum;
    }
}
