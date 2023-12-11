import java.util.*;
public class InputTaking{
    public static void main(String[]args){
        Scanner sc =new Scanner(System.in);
        String Name=sc.nextLine();
        System.out.println(Name);
        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=a+b;
        System.out.println(c);
    }
}