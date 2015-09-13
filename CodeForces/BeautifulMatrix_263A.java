import java.util.Scanner;
import java.util.*;

public class BeautifulMatrix_263A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                int x = scan.nextInt();
                if(x == 1)
                    System.out.println(getDiff(i, j));
            }
        }
    }

    public static int getDiff(int x, int y)
    {
        return Math.abs(x-2) + Math.abs(y-2);
    }
}
