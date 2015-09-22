/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class Tram_116A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int capacity = 0, maxC = 0;

        for(int i=0; i<n; i++)
        {
            int a = scan.nextInt();
            int b = scan.nextInt();
            capacity = Math.abs(capacity-a) + b;
            if(capacity > maxC)
                maxC = capacity;
        }
        System.out.println(maxC);
    }        
}
