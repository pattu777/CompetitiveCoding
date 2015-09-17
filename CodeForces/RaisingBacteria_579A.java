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
        int count = 0;
        
        while(x>0)
        {
            count += x%2;
            x /= 2;
        }
        System.out.println(count);
    }
}
