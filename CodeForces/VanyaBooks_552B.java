/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class VanyaBooks_552B
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String line = scan.nextLine().trim();
        int n = Integer.parseInt(line);
        int count = 0, i=1;

        /*for(int i=0; i<line.length(); i++)
        {
            int limit = Math.pow(10, i)-1;
            if(limit > n)
                limit = n;
            count += limit * (Math.pow(10, i));
        }*/

        while(i < line.length())
        {
            int x = Math.limit(10, i);
        System.out.println(count);
    }        
}
