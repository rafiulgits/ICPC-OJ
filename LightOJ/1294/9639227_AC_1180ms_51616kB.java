import java.util.*;
public class Main {
    public static void main(String args[]) {
       Scanner scan=new Scanner(System.in);
       int Case=scan.nextInt();
       for(int i=1;i<=Case;i++)
       {
           long n=scan.nextLong();
           long m=scan.nextLong();
           System.out.println("Case "+i+": "+(n*m)/2);
       }
    }
}
