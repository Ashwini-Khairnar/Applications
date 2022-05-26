import java.lang.*;

class Base
{
    public int i,j;

    public void fun()       //Defination
    {
        System.out.println("BAse fun");
    }
    public void gun()       ////Defination
    {
        System.out.println("BAse gun");
    }
    public void sun()       //Defination
    {
        System.out.println("BAse sun");
    }
}

class Derived extends Base
{
    public int x,y;

    public void fun()       //overriding
    {
        System.out.println("Derived fun");
    }
    public void sun()       //overriding
    {
        System.out.println("Derived sun");
    }
    public void run()       //Defination
    {
        System.out.println("Derived run");
    }
}

class Virtual
{
    public static void main(String arg[])
    {
       // Base bobj = new Base();    //no casting
       // Derived dobj = new Derived(); //no casting

        Base obj = new Derived();   //upcasting
        // Derived obj1 = new Base();  //downcasting

        obj.fun();
        obj.gun();
        obj.sun();
        obj.run();

    }
}