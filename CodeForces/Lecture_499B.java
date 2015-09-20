/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class Lecture_499B
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        String[] a = scan.nextLine().trim().split(" ");
        int n = Integer.parseInt(a[0]);
        int m = Integer.parseInt(a[1]);
        Map<String, String> mym = new HashMap<String, String>();
        for(int i=0; i<m; i++)
        {
            String[] text = scan.nextLine().trim().split(" ");
            mym.put(text[0], text[1]);
        }

        String[] words = scan.nextLine().trim().split(" ");
        String ret = "";
        for(int i=0; i<words.length; i++)
        {
            String s = mym.get(words[i]);
            if(words[i].length() <= s.length())
                ret += words[i];
            else
                ret += s;
            ret += " ";
        }

        System.out.println(ret);
    }        
}
