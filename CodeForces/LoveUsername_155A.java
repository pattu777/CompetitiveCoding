/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class LoveUsername_155A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int amazing = 0;
        int x = scan.nextInt();
        int mn=x, mx=x;
        for(int i=1; i<n; i++)
        {
            x = scan.nextInt();
            if(x < mn)
            {
                mn = x;
                amazing++;
            }
            if(x > mx)
            {
                mx = x;
                amazing++;
            }
        }
        System.out.println(amazing);
    }        
}
