/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class YoungPhysicst_69A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int xSum=0, ySum=0, zSum=0;

        for(int i=0; i<n; i++)
        {
            xSum += scan.nextInt();
            ySum += scan.nextInt();
            zSum += scan.nextInt();
        }
        if((xSum == 0) && (ySum == 0) && (zSum == 0))
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
