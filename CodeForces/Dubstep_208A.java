/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class Dubstep_208A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String line = scan.next();
        String[] str = line.split("WUB");
        String out = "";

        for(int i=0; i<str.length; i++)
        {
            if(str[i] == "")
                System.out.println("HELLO");
                //out += str[i] + " ";
        }
        System.out.println(out);
    }
}
