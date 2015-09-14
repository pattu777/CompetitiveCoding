/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class GameWithSticks_451A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        boolean val = false;

        while((n!=0) && (m!=0))
        {
            n--;
            m--;
            val = !val;
        }

        if(val)
            System.out.println("Akshat");
        else
            System.out.println("Malvika");
    }
}
