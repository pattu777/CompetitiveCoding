/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class UltraFastMathematician_61A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String num1 = scan.next();
        String num2 = scan.next();
        String out = "";

        for(int i=0; i<num1.length(); i++)
        {
            if(num1.charAt(i) == num2.charAt(i))
                out += "0";
            else
                out += "1";
        }
        System.out.println(out);
    }
}
