import java.util.Scanner;

public class WordCapital_281A
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String word = scan.next();
        char[] newWord = word.toCharArray();
        newWord[0] = Character.toUpperCase(newWord[0]);
        word = String.valueOf(newWord);
        System.out.println(word);
    }
}
