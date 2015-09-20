/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class MishapClub_245E
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String line = scan.next();
        int count = 0;

        for(int i=0; i<line.length(); )
        {
            if((line.charAt(i) == '+') && (i+1 != line.length()))
            {
                if(line.charAt(i+1) == '-')
                    i += 2;
                else
                {
                    i++;
                    count++;
                }
            }
            else
            {
                count++;
                i++;
            }
        }

        System.out.println(count);
    }        
}
