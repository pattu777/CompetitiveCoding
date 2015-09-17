/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class Anton_443A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String line = scan.nextLine().trim();
        Set<Character> mys = new HashSet<Character>();

        for(int i=0; i<line.length(); i++)
        {
            if(Character.isLetter(line.charAt(i)))
                mys.add(line.charAt(i));
        }

        System.out.println(mys.size());
    }
}
