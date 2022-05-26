import java.lang.*;

abstract class Demo
{
    public int i,j;
    
    public Demo()
    {
        System.out.println("Demo constructor");
    }
    
    public void fun()       //concrete
    {
        System.out.println("Demo fun");
    }
    
    public abstract void gun();     //abstract
}

class Hello extends Demo
{
    public int x,y;

    public Hello()
    {
        System.out.println("Hello constructor"); 
    }
    public void sun()   //concrete
    {
        System.out.println("Hello sun");
    }
    public void gun()   //concrete
    {
        System.out.println("Hello gun");
    }
}

class AbstractDemo1
{
    public static void main(String args[])
    {   
        Demo dobj;          //this is reference
       // dobj = new Demo();  //we cant create object of abstract class

        Hello hobj = new Hello();
        hobj.fun();
        hobj.gun();
        hobj.sun(); 
    }

}