/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class ChewbaсcaNumber_514A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String line = scan.next();
        solve(line);
    }        

    public static void solve(String str)
    {
        String out = "";
        for(int i=0; i<str.length(); i++)
        {
            int x = str.charAt(i) - '0';
            int y = '9' - '0';
            if(str.charAt(i) > '4')
                out += (char)('9' - str.charAt(i) + '0');
            else
                out += str.charAt(i);
        }
        System.out.println(out);
    }
}
