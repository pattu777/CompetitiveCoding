import java.util.Scanner;
import java.util.*;

public class Insomnia_148A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int k = scan.nextInt();
        int l = scan.nextInt();
        int m = scan.nextInt();
        int n = scan.nextInt();
        int d = scan.nextInt();
        BitSet s = new BitSet(d+1); 
        int count = 0;

        for(int i=1; i<=d; i++)
        {
            if(((i%k)==0) || ((i%l)==0) || ((i%m)==0) || ((i%n)==0))
                s.set(i);
        }
        
        for(int i=1; i<=d; i++)
        {
            if(s.get(i) == true)
                count++;
        }
        System.out.println(count);
    }
}
