/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class Kitayuta_505A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String line = "revive";//scan.next();

        /*if(isPallindrome(line))
        {
            if((line.length()%2)==0)
                System.out.println(line.substring(0, line.length()/2) + "a" + line.substring(line.length()/2, line.length()));
            else
                System.out.println(line.substring(0, line.length()/2) + line.charAt(line.length()/2) + line.substring(line.length()/2, line.length()));
        }*/
        //else
        //{
            int count = 0;
           Map<Character, Integer> m = new HashMap<Character, Integer>();
           Map<Character, Integer> last = new HashMap<Character, Integer>();

           for(char ch='a'; ch <= 'z'; ch++)
               m.put(ch, 0);

           for(int i=0; i<line.length(); i++)
           {
               if(m.get(line.charAt(i)) == 0)
                   m.put(line.charAt(i), 1);
               else
               {
                   count++;
                   m.put(line.charAt(i), m.get(line.charAt(i))+1);
                   last.put(line.charAt(i), i);
               }
           }

           for (Map.Entry<Character, Integer> entry : m.entrySet()) 
           {
               char key = entry.getKey();
               int value = entry.getValue();
               if(value >=1)
               {
                   System.out.print(key);
                   System.out.print(value);
                   System.out.println();
               }
           }
        //}
    }

    public static boolean isPallindrome(String str)
    {
        for(int i=0, j=str.length()-1; i<=j; i++, j--)
        {
            if(str.charAt(i) != str.charAt(j))
                return false;
        }
        return true;
    }
}
