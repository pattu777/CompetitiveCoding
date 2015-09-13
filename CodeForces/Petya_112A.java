import java.util.Scanner;

public class Petya_112A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String str1 = scan.next();
        String str2 = scan.next();
        int match = 0;

        for(int i=0; i<str1.length(); i++)
        {
            char ch1 = Character.toLowerCase(str1.charAt(i));
            char ch2 = Character.toLowerCase(str2.charAt(i));

            if(ch1 != ch2)
            {
                if(ch1 < ch2)
                    match = -1;
                else
                    match = 1;
                break;
            }
        }
        System.out.println(match);
    }
}
