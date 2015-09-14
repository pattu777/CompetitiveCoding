/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class CalculatingFunction_486A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        Long num = scan.nextLong();
        if((num%2)==0)
            System.out.println(num/2);
        else
            System.out.println(num/2-num);
    }
}
