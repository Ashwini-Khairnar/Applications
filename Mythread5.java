import java.lang.*;

class Demo extends Thread
{
    public void run()       //Running state
    {
        for(int i = 0; i< 10; i++)
        {
           // System.out.println("Value of i : " +i);
            System.out.println("Value of i : "+ Thread.currentThread().getName()+ " " +i);
            try 
            {
                Thread.sleep(1000);
            } 
            catch (Exception obj) {
                //TODO: handle exception
            } 
        }
    }
}
class Mythread5
{
    public static void main(String arg[]) throws Exception
    {
        Demo obj1 = new Demo();
        Thread t1 = new Thread(obj1, "First");       //New state
       
        Demo obj2 = new Demo();
        Thread t2 = new Thread(obj2, "Second");
        t1.start();     //Runnable state

        t1.join();

        t2.start();
        //Dead state

    }
}