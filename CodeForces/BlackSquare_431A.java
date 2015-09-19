/*
 * Author - Chinmaya Kr. Patanaik
 * University - Charles University Prague
 *
 */
import java.util.Scanner;
import java.util.*;

public class BlackSquare_431A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int a1 = scan.nextInt();
        int a2 = scan.nextInt();
        int a3 = scan.nextInt();
        int a4 = scan.nextInt();
        int total = 0;
        String line = scan.next();

        Map<Character, Integer> m = new HashMap<Character, Integer>();
        m.put('1', a1);
        m.put('2', a2);
        m.put('3', a3);
        m.put('4', a4);

        for(int i=0; i<line.length(); i++)
            total += m.get(line.charAt(i));

        System.out.println(total);
    }        
}
