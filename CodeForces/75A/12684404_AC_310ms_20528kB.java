import java.util.Scanner;

public class Main{

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        int num1 = scan.nextInt();
        int num2 = scan.nextInt();
        long ans = num1 + num2;
        
        String s1 = Integer.toString(num1);
        String s2 = Integer.toString(num2);
        String an = Long.toString(ans);

        s1 = s1.replace("0", "");
        s2 = s2.replaceAll("0", "");
        an = an.replaceAll("0", "");

        num1 = Integer.parseInt(s1);
        num2 = Integer.parseInt(s2);
        ans  = Long.parseLong(an);

        if(num1+num2 != ans)
            System.out.println("NO");
        else
            System.out.println("YES");

    }
}