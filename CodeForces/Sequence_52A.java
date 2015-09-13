import java.util.Scanner;
import java.util.*;

public class Sequence_52A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int testCases = Integer.parseInt(scan.nextLine().trim());
        String line = scan.nextLine();
        String[] strArray = line.split(" ");
        int[] numbers = new int[strArray.length];

        HashMap<Integer, Integer> hm = new HashMap<Integer, Integer>();
        hm.put(1, 0);
        hm.put(2, 0);
        hm.put(3, 0);

        for(int i=0; i<strArray.length; i++)
        {
            int x = Integer.parseInt(strArray[i]);
            if(x == 1)
                hm.put(1, hm.get(1)+1);
            else if(x == 2)
                hm.put(2, hm.get(2)+1);
            else if(x == 3)
                hm.put(3, hm.get(3)+1);
        }
        System.out.println(getMin(hm.get(1)+hm.get(2), hm.get(1)+hm.get(3), hm.get(2)+hm.get(3)));
    }

    public static int getMin(int x, int y, int z)
    {
        int ret = x<y ? Math.min(x,z) : Math.min(y,z);
        return ret;
    }
}
