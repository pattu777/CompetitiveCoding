/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class Pangram_520A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int size = Integer.parseInt(scan.nextLine().trim());
        String line = scan.next();
        boolean val = true;

        Map<Character, Integer> m = new HashMap<Character, Integer>();

        for(int i=0; i<line.length(); i++)
            m.put(Character.toLowerCase(line.charAt(i)), 1);

         for(char ch='a'; ch<='z'; ch++)
         {
             if(!m.containsKey(ch))
                 val = false;
         }
         if(val)
             System.out.println("YES");
         else
             System.out.println("NO");
    }        
}
