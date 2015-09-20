/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class IQTest_25A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int size = scan.nextInt();
        int[] arr = new int[size];
        for(int i=0; i<size; i++)
            arr[i] = scan.nextInt();

        int index=1, val;

        int x1 = arr[0];
        int x2 = arr[1];
        int x3 = arr[2];
        if((x1%2 == x2%2) && (x2%2 == x3%2))
        {
            val = x1%2;
            for(int i=4; i<=size; i++)
            {
                if((arr[i-1]%2) != val)
                {
                    index = i;
                    break;
                }
            }
        }
        else
            index = (x1%2 != x2%2) ? (x2%2 == x3%2 ? 1 : 2) : 3;

        System.out.println(index);
        /*int num = scan.nextInt();
        val1 = ((num%2) == 1 ? true : false);
        val2 = val1;

        for(int i=2; i<=size; i++)
        {
            int x = scan.nextInt();
            boolean tmp = ((x%2) == 1 ? true : false);
            val1 = val1 & tmp;
            val2 = val2 | tmp;
            if(val1 != val2)
            {
                System.out.println(i);
                break;
            }
        }*/
    }        
}
