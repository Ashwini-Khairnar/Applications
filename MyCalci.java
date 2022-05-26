import java.lang.*;
import java.awt.*;
import java.awt.event.*;

class CalculatorDemo extends WindowAdapter implements ActionListener
{
    public Frame fobj;

    public Button bobj;
    public Button bobj1;
    public Button bobj2;
    public Button bobj3;
    public Button bobj4;

    public TextField tobj;
    public TextField tobj1;
    public TextField tobj2;

    public Label lobj;
    public Label lobj1;
    public Label lobj2;

    public CalculatorDemo(String name)
    {
        fobj = new Frame(name);

        lobj = new Label("Enter First number:");
        lobj1 = new Label("Enter Second number:");
        lobj2 = new Label("Ans:");

        bobj = new Button("+");
        bobj1 = new Button("-");
        bobj2 = new Button("*");
        bobj3 = new Button("/");
        bobj4 = new Button("%");

        tobj = new TextField();
        tobj1 = new TextField();
        tobj2 = new TextField();
        
        lobj.setBounds(20,30,100,30);
        lobj1.setBounds(20,70,100,30);
        lobj2.setBounds(20,110,100,30);
     
        tobj.setBounds(150,30,100,30);
        tobj1.setBounds(150,70,100,30);
        tobj2.setBounds(150,110,100,30);

        bobj.setBounds(20,180,60,30);
        bobj1.setBounds(90,180,60,30);
        bobj2.setBounds(160,180,60,30);
        bobj3.setBounds(230,180,60,30);
        bobj4.setBounds(300,180,60,30);
        
        fobj.add(bobj);
        fobj.add(bobj1);
        fobj.add(bobj2);
        fobj.add(bobj3);
        fobj.add(bobj4);
        
        fobj.add(tobj);
        fobj.add(tobj1);
        fobj.add(tobj2);        

        fobj.add(lobj);
        fobj.add(lobj1);
        fobj.add(lobj2);

        fobj.setSize(600,600);
        fobj.setVisible(true);
        fobj.setLayout(null);

        fobj.addWindowListener(this);
        bobj.addActionListener(this);
        bobj1.addActionListener(this);
        bobj2.addActionListener(this);
        bobj3.addActionListener(this);
        bobj4.addActionListener(this);
    }

    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
    public void actionPerformed(ActionEvent obj)
    {
        int a = Integer.parseInt(tobj.getText());
        int b = Integer.parseInt(tobj1.getText());
        int c = 0;

        if(obj.getSource().equals(bobj))
        {
            c = a + b;
            tobj2.setText(String.valueOf(c));
        }

        if(obj.getSource().equals(bobj1))
        {
            c = a - b;
            tobj2.setText(String.valueOf(c));
        }

        if(obj.getSource().equals(bobj2))
        {
            c = a * b;
            tobj2.setText(String.valueOf(c));
        }

        if(obj.getSource().equals(bobj3))
        {
            c = a / b;
            tobj2.setText(String.valueOf(c));
        }

        if(obj.getSource().equals(bobj4))
        {
            c = a % b;
            tobj2.setText(String.valueOf(c));
        }
    }
}

class MyCalci
{
    public static void main(String arg[])
    {
        CalculatorDemo cobj = new CalculatorDemo("Calculator");
    }
}