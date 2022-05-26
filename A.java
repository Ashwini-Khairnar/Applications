import java.awt.*;

class Demo
{
    public Frame fobj;
    public TextField tobj;

    public Demo(String name)
    {
        fobj = new Frame(name);
        tobj = new TextField("Hello");

        
        fobj.setVisible(true);
        fobj.setSize(500,500);
        fobj.setLayout(null);

        fobj.add(tobj);

    }
}

class A
{
    public static void main(String[] arg)
    {
        Demo dobj = new Demo("Demo");
    }
}