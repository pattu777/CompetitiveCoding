/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class Translation_41A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String str1 = scan.nextLine();
        String str2 = scan.nextLine();
        boolean val = true;

        if(str1.length() != str2.length())
            System.out.println("NO");
        else
        {
            for(int i=0, j=str1.length()-1; j>=0; i++, j--)
            {
                if(str1.charAt(i) != str2.charAt(j))
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
}
