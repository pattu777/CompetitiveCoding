import java.util.Scanner;

public class StonesTable_266A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int testCases = scan.nextInt();
        String str = scan.next();
        int count = 0;

        for(int i=1; i<str.length(); i++)
        {
            if(str.charAt(i) == str.charAt(i-1))
                count++;
        }
        System.out.println(count);
    }
}
