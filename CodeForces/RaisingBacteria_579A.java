/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class RaisingBacteria_579A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        int count = 1, i=1;
        double y = 1;
        
        while(y < x)
        {
            y = Math.pow(2, i);
            count++;
            i++;
        }
    }
}
