import java.util.Scanner;

public class Vasya
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        int[] out = new int[1000];

        for(int i=2, j=3; i<=num; )
        {
            if((num % i) == 0)
            {
                i += i;
                out[k] = i;
                k++;
            }
            else
            {
                j++;
                i = j;
            }
        }
    }
} 
