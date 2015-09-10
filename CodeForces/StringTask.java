import java.util.Scanner;
import java.util.Arrays;

public class StringTask
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String str = scan.next();
        String vow = "aoyeuiAOYEUI";
        String out = "";

        for(int i=0; i<str.length(); i++)
        {
            if(vow.indexOf(str.charAt(i)) != -1)
                continue;
            else
            {
                out += '.';
                if(Character.isUpperCase(str.charAt(i)))
                    out += Character.toLowerCase(str.charAt(i));
                else
                    out += str.charAt(i);
            }
        }
        System.out.println(out);
    }
}
