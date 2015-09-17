/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class TheatreSquare_1A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        long n = scan.nextLong();
        long m = scan.nextLong();
        long a = scan.nextLong();
        long valRow = (n/a);
        long valCol = (m/a);

        if((n%a) != 0)
            valRow++;
        if((m%a) != 0)
            valCol++;

        System.out.println(valRow*valCol);
    }        
}
