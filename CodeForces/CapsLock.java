import java.util.Scanner;

public class CapsLock
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String line = scan.nextLine();

        boolean isCaps = true;
        for(int i=1; i<line.length(); i++)
            isCaps &= Character.isUpperCase(line.charAt(i));
        
        if(isCaps)
            changeCase(line);
        else
            System.out.println(line);
    }

    public static void changeCase(String str)
    {
        char[] arr = str.toCharArray();
        for(int i=0; i<str.length(); i++)
        {
            if(Character.isLowerCase(arr[i]))
                arr[i] = Character.toUpperCase(arr[i]);
            
            else if(Character.isUpperCase(arr[i]))
                arr[i] = Character.toLowerCase(arr[i]);
        }
        System.out.println(String.valueOf(arr));
    }
}
