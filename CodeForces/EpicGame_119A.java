import java.util.Scanner;

public class EpicGame_119A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        int n = scan.nextInt();

        while(n >= 0)
        {
            int s1 = gcd(a, n);
            if(s1 > n)
            {
                System.out.println("1");
                break;
            }
            n = n-s1;
            int s2 = gcd(b, n);
            if(s2 > n)
            {
                System.out.println("0");
                break;
            }
            n = n-s2;
        }
    }

    public static int gcd(int a, int b)
    {
        if(b == 0)
            return a;
        else
            return gcd(b, a%b);
    }
}
