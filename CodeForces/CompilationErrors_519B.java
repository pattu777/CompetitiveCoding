/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class CompilationErrors_519B
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        long errors = Long.parseLong(scan.nextLine().trim());
        String[] line1 = scan.nextLine().trim().split(" ");
        String[] line2 = scan.nextLine().trim().split(" ");
        String[] line3 = scan.nextLine().trim().split(" ");
        
        solveSimple(line1, line2, line3);
    }        

    public static void solveSimple(String[] line1, String[] line2, String[] line3)
    {
        long sum1 = 0, sum2 = 0, sum3 = 0;

        for(int i=0; i<line1.length; i++)
            sum1 += Long.parseLong(line1[i]);
        for(int i=0; i<line2.length; i++)
            sum2 += Long.parseLong(line2[i]);
        for(int i=0; i<line3.length; i++)
            sum3 += Long.parseLong(line3[i]);

        System.out.println(sum1-sum2);
        System.out.println(sum2-sum3);
    }
}
