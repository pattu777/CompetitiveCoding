import java.util.Scanner;

public class Taxi
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int testCases = scan.nextInt();
        int noOne=0, noTwo=0, noThree=0, noFour=0;
        int res = 0;

        for(int i=0; i<testCases; i++)
        {
            int val = scan.nextInt();
            if(val == 1)
                noOne++;
            else if(val == 2)
                noTwo++;
            else if(val == 3)
                noThree++;
            else if(val == 4)
                noFour++;
        }
        
        res += noFour + noThree + noTwo/2 + noOne/4;
        noTwo %= 2;
        noOne %= 4;

        if(noOne > noTwo)
        {
            res += (noThree-noOne);
            noOne = noThree - noOne;
            if(noTwo==1)
                res += 
        }
        else if(noThree <= noOne)
            res += noThree;
        

    }
}
