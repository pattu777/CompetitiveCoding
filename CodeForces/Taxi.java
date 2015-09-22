import java.util.Scanner;
import java.util.*;

public class Taxi
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int res = 0, sum = 0;
        Map<Integer, Integer> m = new HashMap<Integer, Integer>();
        for(int i=1; i<=4; i++)
            m.put(i, 0);

        for(int i=0; i<n; i++)
        {
            int x = scan.nextInt();
            if(!m.containsKey(x))
                m.put(x, 1);
            else
                m.put(x, m.get(x)+1);
        }
        
        res += m.get(4);
        if(m.get(3) >= m.get(1))
            m.put(1, 0);
        else
            m.put(1, m.get(1)-m.get(3));

        res += m.get(3);
        res += m.get(2)/2;
        
        if(m.get(2)%2 != 0)
        {
            if(m.get(1) <= 2)
                res++;
            else
                res += 1+m.get(1)-2;
        }
        else
            res += m.get(1)/4 + m.get(4)%4;

        System.out.println(res);
    }
}
