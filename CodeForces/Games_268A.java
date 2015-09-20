/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class Games_268A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        Team[] arr = new Team[n];   
        for(int i=0; i<n; i++)
        {
            int x = scan.nextInt();
            int y = scan.nextInt();
            arr[i] = new Team(x, y);
        }

        solve(arr, n);
    }

    public static class Team
    {
        private int homeColor;
        private int guestColor;

        Team(int x, int y)
        {
            this.homeColor = x;
            this.guestColor = y;
        }

        public int getHomeColor()
        {
            return this.homeColor;
        }

        public void setHomeColor(int x)
        {
            this.homeColor = x;
        }
        
        public int getGuestColor()
        {
            return this.guestColor;
        }

        public void setGuestColor(int x)
        {
            this.guestColor = x;
        }

    }

    public static void solve(Team[] arr, int size)
    {
        int count = 0;
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                if(arr[i].getHomeColor() == arr[j].getGuestColor())
                    count++;
                if(arr[j].getHomeColor() == arr[i].getGuestColor())
                    count++;
            }
        }
        System.out.println(count);
    }
}
