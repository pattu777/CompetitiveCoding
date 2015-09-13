import java.util.Scanner;

public class Team
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int problems = Integer.parseInt(scan.nextLine());
        int count = 0;
        for(int i=0; i<problems; i++)
        {
            int a = scan.nextInt();
            int b = scan.nextInt();
            int c = scan.nextInt();

            boolean ans = ((a == b) && (a == 1)) || ((a == c) && (a == 1)) || ((b == c) && (b == 1));
            if(ans)
                count++;
        }
        System.out.println(count);
    }
}
