/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class LuckyDivison_122A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        //int testCases = scan.nextInt();

        int[] arr = {0, 4, 7};
        for(int i=1; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                for(int k=0; k<3; k++)
                    System.out.println(buildInt(arr[i], arr[j], arr[k]));
            }
        }
    }

    public static int buildInt(int x, int y, int z)
    {
        return (x + 10*y + 100*z);
    }
}
