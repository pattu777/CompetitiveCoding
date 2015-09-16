/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class MikeAndFox_548A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String line = scan.next();
        int size = scan.nextInt();
        if((line.length()%size) != 0)
            System.out.println("NO");
        else
        {
            int cut = line.length()/size;
            boolean val = true;

            for(int i=0, j=cut; j<=line.length(); i += cut, j += cut)
            {
                if(!isPallindrome(line.substring(i, j)))
                    val = false;
            }

            if(val)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
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
