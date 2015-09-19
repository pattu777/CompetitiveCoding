/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class CheapTravel_466A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        int a = scan.nextInt();
        int b = scan.nextInt();
        int total = 0, x=n;

        while(n >= m)
        {
            total += Math.min(a * m, b);
            n = n-m;
        }
        if(n != 0)
            total += Math.min(a * n, b);

        System.out.println(total);
    }        
}
