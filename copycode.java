import java.util.Scanner;

public class copycode
{
    public static void main(String args[])
    {
        int n, sum = 0;

        Scanner sc = new Scanner(System.in);
        int size=sc.nextInt();

        System.out.print("Enter the number:");
        int a[]= new int[size];
        for(int i=0; i<size; i++)
        {
            a[i]=sc.nextInt();
        }
        
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                while(a[j] > 0)
                {
                    n = a[j] % 10;
                    sum = sum + n;
                    a[j] = a[j] / 10;
                }
            }

        }

        System.out.println("Sum of Digits:"+sum);
    }
}