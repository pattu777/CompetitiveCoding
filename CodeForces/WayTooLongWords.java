import java.util.Scanner;

public class WayTooLongWords
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int testCases = scan.nextInt();
        for(int i=0; i<testCases; i++)
        {
            String word = scan.next();
            System.out.println(getWord(word));
        }
    }

    public static String getWord(String word)
    {
        int count = 0;
        for(int i=0; i<word.length(); i++)
            count++;
        if(count <= 10)
            return word;
        else
        {
            String output = word.charAt(0) + Integer.toString(count-2) + word.charAt(count-1);
            return output;
        }
    }
}
