import java.io.*;
import java.util.Scanner;


public class question6 {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);

        int i=1;

        while(sc.hasNextLine())
        {
            System.out.println(i++ + " " +sc.nextLine());
        }
        sc.close();
    }
}
