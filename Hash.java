
import java.lang.*;

class Demo{

}

class Hash
{
    public static void main(String arg[])
    {
        String str1 = "Marvellous";
        String str2 = "Marvellous";
        String str3 = "Infosystems";
        Demo dobj = new Demo();

        System.out.println("Hashcode of str : "+str1.hashCode());
        System.out.println("Hashcode of str : "+str2.hashCode());
        System.out.println("Hashcode of str : "+str3.hashCode());
        System.out.println("Hashcode of str : "+dobj.hashCode());
    }
}