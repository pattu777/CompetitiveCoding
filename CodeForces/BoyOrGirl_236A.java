import java.util.Scanner;
import java.util.*;

public class BoyOrGirl_236A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String str = scan.next();
        HashMap<Character, Integer> name = new HashMap<Character, Integer>();

        for(int i=0; i<str.length(); i++)
        {
            char ch = str.charAt(i);
            if(name.containsKey(ch))
                name.put(ch, name.get(ch)+1);
            else
                name.put(str.charAt(i), 1);
        }

        if((name.size()%2) == 0)
            System.out.println("CHAT WITH HER!");
        else
            System.out.println("IGNORE HIM!");
    }
}
