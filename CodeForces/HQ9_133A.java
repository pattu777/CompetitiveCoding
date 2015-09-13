import java.util.Scanner;

public class HQ9_133A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String str = scan.next();
        boolean willPrint = false;

        for(int i=0; i<str.length(); i++)
        {
            char ch = str.charAt(i);
            if((ch == 'H') || (ch == 'Q') || (ch == '9'))
                willPrint = true;
        }
        if(willPrint)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
