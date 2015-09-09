import java.util.Scanner;
import java.util.Vector;

public class NextRound
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int size = scan.nextInt();
        int num = scan.nextInt();
        int[] arr = new int[size];

        for(int i=0; i<size; i++)
            arr[i] = scan.nextInt();
        scan.close();
        System.out.println(count_num_greater(arr, size, num));
    }

    public static int count_num_greater(int[] arr, int size, int num)
    {
        int count = 0;
        for(int i=0; i<size; i++)
        {
            if((arr[i] >= arr[num-1]) && (arr[i] > 0))
                count++;
            else
                break;
        }
        return count;
    }
}
