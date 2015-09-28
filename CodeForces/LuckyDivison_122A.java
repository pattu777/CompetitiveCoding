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
        int num = scan.nextInt();

        /*int[] arr = {0, 4, 7};
        for(int i=1; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                for(int k=0; k<3; k++)
                    System.out.println(buildInt(arr[i], arr[j], arr[k]));
            }
        }*/
        solve(num);
    }

    public static int buildInt(int x, int y, int z)
    {
        return (x + 10*y + 100*z);
    }

    public static void solve(int num)
    {
        boolean val = false;
        if(isLucky(num))
            val = true;
        else
        {
            for(int i=4; i<num; i++)
            {
                if(isLucky(i) && (num%i == 0))
                    val = true;
            }
        }
        if(val)
            System.out.println("YES");
        else
            System.out.println("NO");
    }

    public static boolean isLucky(int num)
    {
        while(num != 0)
        {
            int x = num%10;
            if((x!=4) && (x!=7))
                return false;
            num = num/10;
        }
        return true;
    }
}
