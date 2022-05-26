import java.lang.*;
import java.util.*;

class Input
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter your name");
        String name = sobj.nextLine();

        System.out.println("Please enter your age");
        int Age = sobj.nextInt();

        System.out.println("Please enter your percentage");
        float percentage = sobj.nextFloat();

        System.out.println("Please enter your gender");
        String gender = sobj.next();

        System.out.println("Your name is : "+name);
        System.out.println("Your age is : "+Age);
        System.out.println("Your gender is : "+gender);
        System.out.println("Your percentage is : "+percentage);

        sobj.close();
    }
}