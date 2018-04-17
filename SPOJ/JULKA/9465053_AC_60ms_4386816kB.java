import java.util.*;
import java.util.UUID;
import java.math.BigInteger;
public class Main {
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        for(int i=0;i<10;i++)
        {
            BigInteger a,b,x,y,c;
            c=new BigInteger("2");
            a=scan.nextBigInteger();
            b=scan.nextBigInteger();
            x=a.subtract(b);
            y=x.divide(c);
            x=y.add(b);
            System.out.println(x);
            System.out.println(y);
        }
    } 
}
