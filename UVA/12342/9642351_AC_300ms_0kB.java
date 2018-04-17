import java.util.*;
public class Main
{
    public static void main(String args[])
    {
        Scanner scan=new Scanner (System.in);
        int Case=scan.nextInt();
        for(int i=1;i<=Case;i++)
        {
            long tax=0;
            long tk=scan.nextLong();
            if(tk-180000>0)
            {
                tk-=180000;
                tax+=(tk*10);
                if(tk-300000>0)
                {
                    tk-=300000;
                    tax+=(tk*5);
                    if(tk-400000>0)
                    {
                        tk-=400000;
                        tax+=(tk*5);
                        if(tk-300000>0)
                        {
                            tk-=300000;
                            tax+=(tk*5);
                        }
                    }
                }
            }
            if(tax%100!=0)
                tax+=(100-(tax%100));
            else 
                tax-=tax%100;
            tax/=100;
            if(tax>0 && tax<2000) tax=2000;
            System.out.println("Case "+i+": "+tax);
        }
    }
}