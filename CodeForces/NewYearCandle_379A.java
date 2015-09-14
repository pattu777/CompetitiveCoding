import java.util.Scanner;
import java.util.*;

public class NewYearCandle_379A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();

        int res = 0;
        for(int i=1; i<=n; i++)
        {
            if((i%m)==0)
                n++;
        }
        System.out.println(n);
    }
}
