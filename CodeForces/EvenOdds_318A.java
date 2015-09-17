/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class EvenOdds_318A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        long n = scan.nextLong();
        long k = scan.nextLong();
        long mid;

        if((n%2) == 0)
            mid = n/2;
        else
            mid = n/2+1;

        if(k <= mid)
            System.out.println(2*k-1);
        else
            System.out.println(2*(k-mid));
    }        
}
