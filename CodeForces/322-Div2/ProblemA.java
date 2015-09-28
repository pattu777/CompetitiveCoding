/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class ProblemA
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = Math.min(a, b);
        int d;
        if(a == b)
            d = 0;
        else if(a > b)
            d = (a-b)/2;
        else
            d = (b-a)/2;
        System.out.println(c + " " + d);
    }        
}
