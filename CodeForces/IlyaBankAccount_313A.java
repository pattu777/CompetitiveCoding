/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class IlyaBankAccount_313A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String line = scan.next();
        int acc = Integer.parseInt(line);
        int finalAcc = 0;

        int[] bits = getBits(acc, line.length());
        int num1 = buildNum(bits, 0);
        int num2 = buildNum(bits, 1);

        if(acc > 0)
        {
            /*int[] bits = new int[line.length()];
            int tmp = acc, i=0;
            while(tmp != 0)
            {
                bits[i] = tmp % 10;
                tmp = tmp/10;
                i++;
            }*/
            System.out.println(Math.max(acc, Math.max(num1, num2)));
        }
        else
            System.out.println(Math.max(acc, Math.max(num1, num2)));
    }    

    public static int buildNum(int[] bits, int val)
    {
        int num = 0;
        for(int i=2; i<bits.length; i++)
            num += Math.pow(10, i-1) * bits[i];
        num += Math.pow(10, 0) * bits[val];
        return num;
    }

    public static int[] getBits(int acc, int size)
    {
        int[] bits = new int[size];
        int tmp = acc, i=0;
        while(tmp != 0)
        {
            bits[i] = tmp % 10;
            tmp = tmp/10;
            i++;
        }
        return bits;
    }
}
