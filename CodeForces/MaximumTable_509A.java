/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class MaximumTable_509A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[][] box = new int[n][n];

        for(int i=0; i<n; i++)
        {
            box[i][0] = 1;
            box[0][i] = 1;
        }

        for(int i=1; i<n; i++)
        {
            for(int j=1; j<n; j++)
                box[i][j] = box[i-1][j] + box[i][j-1];
        }

        System.out.println(box[n-1][n-1]);
    }        
}
