import java.util.Scanner;
import java.util.*;

public class DoubleCola_82A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        Long num = scan.nextLong();
        long count = 1;
        Queue<String> myQ = new LinkedList<String>();
        myQ.add("Sheldon");
        myQ.add("Leonard");
        myQ.add("Penny");
        myQ.add("Rajesh");
        myQ.add("Howard");

        while(count != num)
        {
            String str = myQ.remove();
            myQ.add(str);
            myQ.add(str);
            count++;
        }
        System.out.println(myQ.remove());
    }
}
