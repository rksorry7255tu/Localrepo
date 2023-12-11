class Student{
    String name;
    int age;
    public void printinfo(String name){
        System.out.println(this.name);
    }
    public void printinfo(int age){
        System.out.println(this.age);
    }
    public void printinfo(String name,int age){
        System.out.println(this.name);
        System.out.println(this.age);
    }
}
public class oops{
    public static void main(String []args){
        Student s1=new Student();
        s1.name="Ravi";
        s1.age=22;
        s1.printinfo(s1.name,s1.age);
    }
}