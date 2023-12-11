import java.util.*;
class Strings2{
    public static void main(String[]args){
        //concatenation
        String firstName="Ravi";
        String FirstName="ravi";
        String lastName=" kumar";
        String fullName=firstName+lastName;
        System.out.println(fullName);
        //to find the length of string
        System.out.println(fullName.length());
        //charAt
        for(int i=0;i<fullName.length();i++){
            System.out.println(fullName.charAt(i));
        }
        //compare
        //s1>s2 :+ve value
        //s1<s2 :-ve value
        //s1=s2 :0
        System.out.println(fullName.compareTo(lastName));
        System.out.println(fullName.substring(5));
        System.out.println(fullName.indexOf('k'));
        System.out.println(firstName.equals(FirstName));
        String s1=FirstName.replace('r','R');
        System.out.println(s1);
        String s2=s1.toLowerCase();
        System.out.println(s2);
        String s3=s1.toUpperCase();
        System.out.println(s3);

        
    }
}