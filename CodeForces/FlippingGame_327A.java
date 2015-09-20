/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class FlippingGame_327A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++)
            arr[i] = scan.nextInt();

        System.out.println(getLongestSequence(arr, n));
    }        

    public static int getLongestSequence(int[] arr, int size)
    {
        int lower=0, higher=0, maxCount=0;
        for(int i=0; i<size; i++)
        {
            if(arr[i] == 0)
            {
                int count=1, j;
                for(j=i+1; j<size; )
                {
                    if(arr[j] == arr[i])
                    { 
                        j++;
                        count++;
                    }
                    else
                        break;
                }
                if(count > maxCount)
                {
                    lower = i;
                    higher = --j;
                    maxCount = count;
                }
            }
        }

        if((lower >= 0) && (arr[lower-1] == 1))
            maxCount++;
        if((higher < size-1) && (arr[higher+1] == 1))
            maxCount++;
            
        return maxCount;
    }
}
