import java.util.Scanner;

public class WaterMelon
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        if(((n % 2)==0) && (n != 2))
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
