import java.util.Scanner;
import java.util.Arrays;

public class Math_339A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String str = scan.next();
        String out = "";

        str = str.replace("+", "");
        char[] arr = str.toCharArray();
        Arrays.sort(arr);

        for(int i=0; i<str.length(); i++)
            out += arr[i] + "+";

        out = out.substring(0, out.length()-1);
        System.out.println(out);
    }
}
