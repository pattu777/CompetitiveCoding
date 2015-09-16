/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class NearlyLucky_110A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String line = scan.next();
        long count = 0;
        long num = Long.parseLong(line);

        while(num != 0)
        {
            long x = num%10;
            if((x == 4) || (x == 7))
                count++;
            num = num/10;
        }

        if(isLucky(count))
            System.out.println("YES");
        else
            System.out.println("NO");
    }

    public static boolean isLucky(long x)
    {
        if(x == 0)
            return false;
        else
        {
            while(x != 0)
            {
                long y = x%10;
                if((y != 4) && (y != 7))
                    return false;
                x = x/10;
            }
            return true;
        }
    }
}
