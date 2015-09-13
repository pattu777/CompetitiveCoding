import java.util.Scanner;
import java.util.*;

public class BeautifulYear_271A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int year = scan.nextInt();

        for(int i=year+1;; i++)
        {
            if(isDistinct(i))
            {
                System.out.println(i);
                break;
            }
        }
    }

    public static boolean isDistinct(int x)
    {
        int count = 0;
        Set<Integer> s = new HashSet<Integer>();
        for(int i=0; x!=0; i++)
        {
            s.add(x%10);
            x = x/10;
            count++;
        }
        if(count == s.size())
            return true;
        else
            return false;
    }
}
