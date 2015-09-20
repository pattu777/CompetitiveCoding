/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class Word_59A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String line = scan.next();
        int upperCount = 0, lowerCount = 0;
        for(int i=0; i<line.length(); i++)
        {
            char ch = line.charAt(i);
            if(Character.isUpperCase(ch))
                upperCount++;
            else
                lowerCount++;
        }
        if(upperCount > lowerCount)
            System.out.println(line.toUpperCase());
        else
            System.out.println(line.toLowerCase());
    }        
}
