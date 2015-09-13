import java.util.Scanner;

public class Football
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String str = scan.next();
        boolean val = false;
        int count = 1;
        char ch;

        for(int i=0; i<str.length()-1; i++)
        {
            if(count >= 7)
                break;
            else
            {
                if(str.charAt(i) == str.charAt(i+1))
                    count++;
                else
                    count=1;
            }
        }
        if(count >= 7)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
