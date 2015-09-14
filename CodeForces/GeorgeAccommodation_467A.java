/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class GeorgeAccommodation_467A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int cases = scan.nextInt();
        int count = 0;
        for(int i=0; i< cases; i++)
        {
            int x = scan.nextInt();
            int y = scan.nextInt();
            if((y-x) >= 2)
                count++;
        }
        System.out.println(count);
    }
}
