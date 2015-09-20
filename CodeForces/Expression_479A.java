/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class Expression_479A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();
        
        int num1 = Math.max(a+b+c, a*b*c);
        int num2 = Math.max((a*b)+c, a*(b+c));
        int num3 = Math.max(a+(b*c), (a+b)*c);
        int maxNum = Math.max(num1, Math.max(num2, num3));

        System.out.println(maxNum);
    }        
}
