/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class LittlePonyCrystalMine_454A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        char[][] box = new char[n][n];

        // Decorate the middle row.
        for(int j=0; j<n; j++)
            box[n/2][j] = 'D';

        // Decorate the upper half
        for(int i=0; i<n/2; i++)
        {
            int pos1 = n/2-i;
            int pos2 = n/2+i;
            for(int j=0; j<n; j++)
            {
                if((j >= pos1) && (j <= pos2))
                    box[i][j] = 'D';
                else
                    box[i][j] = '*';
            }
        }
        
        // Decorate the lower half
        for(int i=n; i>n/2; i--)
        {
            int pos1 = n/2-(n-i);
            int pos2 = n/2+(n-i);
            for(int j=0; j<n; j++)
            {
                if((j >= pos1) && (j <= pos2))
                    box[i-1][j] = 'D';
                else
                    box[i-1][j] = '*';
            }
        }

        // Print the matrix
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                System.out.print(box[i][j]);
            System.out.print("\n");
        }


    }        
}
