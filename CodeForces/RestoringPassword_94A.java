/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class RestoringPassword_94A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String pass = scan.next();
        Map<String, Integer> m = new HashMap<String, Integer>();
        for(int i=0; i<10; i++)
        {
            String s = scan.next();
            m.put(s, i);
        }

        solve(pass, m);
    }        

    public static void solve(String pass, Map<String, Integer> m)
    {
        String ret = "";
        for(int i=0; i<pass.length(); i+=10)
            ret += m.get(pass.substring(i, i+10));
        System.out.println(ret);
    }
}
