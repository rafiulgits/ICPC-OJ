import java.util.Scanner;

public class Main{

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        
        String email = scan.next();
        
        email = email.replaceAll("dot", ".").replaceFirst("at", "@");
        if(email.indexOf('.') == 0)
            email = email.replaceFirst(".", "dot");
        else if(email.indexOf('@') == 0){
            email = email.replaceFirst("@", "-").replaceFirst("at", "@").replaceFirst("-", "at");
        }
        
        if(email.lastIndexOf(".")==email.length()-1)
            email = email.substring(0, email.length()-1) + "dot";
        else if(email.lastIndexOf("@") == email.length()-1)
            email = email.substring(0, email.length()-1) + "at";
       
        System.out.println(email);
    }
}