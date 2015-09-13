import java.util.Scanner;

public class Bit
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int cases = Integer.parseInt(scan.nextLine());
        int res = 0;

        for(int i=0; i<cases; i++)
        {
            String line = scan.nextLine();
            if(line.charAt(1) == '+')
                res++;
            else if(line.charAt(1) == '-')
                res--;
        }
        System.out.println(res);
    }
}
