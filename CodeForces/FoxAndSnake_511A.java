/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class FoxAndSnake_511A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        char[][] box = new char[n][m];
        boolean val=true;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if((i%2) == 0)
                {
                    box[i-1][j-1] = '.';
                    if(val)
                        box[i-1][m-1] = '#';
                    else
                        box[i-1][0] = '#';
                }
                else
                    box[i-1][j-1] = '#';
            }
            if((i%2)==0)
                val = !val;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                System.out.print(box[i][j]);
            System.out.println();
        }
    }        
}
