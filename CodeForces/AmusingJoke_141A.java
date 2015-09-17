/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class AmusingJoke_141A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String str1 = scan.next();
        String str2 = scan.next();
        String str3 = scan.next();
        boolean val = true;
        Map<Character, Integer> m = new HashMap<Character, Integer>();
        Map<Character, Integer> f = new HashMap<Character, Integer>();

        for(char ch = 'A'; ch <= 'Z'; ch++)
        {
            m.put(ch, 0);
            f.put(ch, 0);
        }

        for(int i=0; i<str1.length(); i++)
        {
            if(m.get(str1.charAt(i)) == 0)
                m.put(str1.charAt(i), 1);
            else
                m.put(str1.charAt(i), m.get(str1.charAt(i))+1);
        }
        
        for(int i=0; i<str2.length(); i++)
        {
            if(m.get(str2.charAt(i)) == 0)
                m.put(str2.charAt(i), 1);
            else
                m.put(str2.charAt(i), m.get(str2.charAt(i))+1);
        }
        
        for(int i=0; i<str3.length(); i++)
        {
            if(f.get(str3.charAt(i)) == 0)
                f.put(str3.charAt(i), 1);
            else
                f.put(str3.charAt(i), f.get(str3.charAt(i))+1);
        }
        
        for(Map.Entry<Character, Integer> entry : m.entrySet())
        {
            char key = entry.getKey();
            int value = entry.getValue();
            if(value != f.get(key))
            {
                val = false;
                break;
            }
        }
        if(val)
            System.out.println("YES");
        else
            System.out.println("NO");
    }        
}
