/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class SoldierBanana_546A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int k = scan.nextInt();
        long n = scan.nextInt();
        int w = scan.nextInt();
        
        long val = k*w*(w+1)/2;
        if(n >= val)
            System.out.println(0);
        else
            System.out.println(val-n);
    }
}
