/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class Spreadsheets_1B
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = Integer.parseInt(scan.nextLine().trim());

        for(int i=0; i<n; i++)
            convert(scan.next());
    }        

    public static void convert(String str)
    {
        Map<Character, Integer> m1 = new HashMap<Character, Integer>();
        Map<Integer, Character> m2 = new HashMap<Integer, Character>();

        int val = 1;
        for(char ch = 'A'; ch <= 'Z'; ch++, val++)
        {
            m1.put(ch, val);
            m2.put(val, ch);
        }

        if(str.charAt(0) == 'R')
            System.out.println(convertToV1(str, m2));
        else
            System.out.println(convertToV2(str, m1));
    }

    public static String convertToV1(String str, Map<Integer, Character> m)
    {
        int index;
        for(index=0; index<str.length(); index++)
        {
            if(str.charAt(index) == 'C')
                break;
        }
        int row = Integer.parseInt(str.substring(1, index));
        int col = Integer.parseInt(str.substring(index+1, str.length()));

        String ret = "";
        int newRow = row, newCol;
        while(col != 0)
        {
            ret = Character.toString(m.get(col%26)) + ret;
            col = col/26;
        }
        ret += newRow;
        return ret;
    }

    public static String convertToV2(String str, Map<Character, Integer> m)
    {
        String ret = "R";
        int index;
        for(index=0; index<str.length(); index++)
        {
            if(Character.isDigit(str.charAt(index)))
                break;
        }
        int row = Integer.parseInt(str.substring(index, str.length()));
        int newRow = row, newCol = 0;

        for(int i=index; i>0; i--)
            //System.out.println(i);
            newCol += Math.pow(26, index-i) * m.get(str.charAt(i-1));

        ret += newRow;
        ret += 'C';
        ret += newCol;
        return ret;
    }

}
