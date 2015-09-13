import java.util.Scanner;
import java.util.*;

public class BoyOrGirl_236A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String str = scan.next();
        Set<Character> name = new HashSet<Character>();

        for(int i=0; i<str.length(); i++)
        {
            char ch = str.charAt(i);
            name.add(str.charAt(i));
        }

        if((name.size()%2) == 0)
            System.out.println("CHAT WITH HER!");
        else
            System.out.println("IGNORE HIM!");
    }
}
