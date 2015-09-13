import java.util.Scanner;

public class MultiplicationTable
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        Long row = scan.nextLong();
        Long num = scan.nextLong();
        long count = 0;

        if(num <= row)
            row = num;

        for(long i=1; i<=row; i++)
        {
            for(long j=1; j<=row; j++)
            {
                if(num == (i*j))
                    count++;
            }
        }

        System.out.println(count);
    }

    public static void count(int row, Long num)
    {
        long[] arr = new long[num/2];
        long count = 0, total=0;
        for(long i=2, j=0, k=num/2; i<k; i++)
        {
            if((num%i) == 0)
            {
                arr[j] = i;
                k = num/i;
                arr[j+1] = k;
                j++;
                if(i<=row)
                    count++;
                if()
            }
        }
    }
}

