/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;
import java.io.*;

public class FaceDetection_549A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String[] line = scan.nextLine().trim().split(" ");
        int n = Integer.parseInt(line[0]);
        int m = Integer.parseInt(line[1]);

        char[][] box = new char[n][m];
        for(int i=0; i<n; i++)
        {
            String str = scan.nextLine().trim();
            for(int j=0; j<m; j++)
                box[i][j] = str.charAt(j);
        }

        solve(box, n, m);
    }        

    public static void solve(char[][] box, int row, int col)
    {
        int count = 0;
        for(int i=0; i<row-1; i++)
        {
            for(int j=0; j<col-1; j++)
            {
                if(isFace(box, i, j))   
                    count++;
            }
        }
        System.out.println(count);
    }

    public static boolean isFace(char[][] box, int x, int y)
    {
        boolean var = true;
        Map<Character, Integer> m = new HashMap<Character, Integer>();
        m.put('f', 0);
        m.put('a', 0);
        m.put('c', 0);
        m.put('e', 0);

        for(int i=x; i<x+2; i++)
        {
            for(int j=y; j<y+2; j++)
            {
                if(m.containsKey(box[i][j]))
                    m.put(box[i][j], m.get(box[i][j])+1);
            }
        }
        for(int i : m.values())
        {
            if(i != 1)
                var = false;
        }
        return var;
    }
}
