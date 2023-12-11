class Shape{
    String color;
}
class Triangle extends Shape{

}
public class inheritance{
    public static void main(String[]args){
        Triangle t1=new Triangle();
        t1.color="red";
        System.out.println(t1.color);
        Shape s1=new Shape();
        s1.color="blue";
        System.out.println(s1.color);
    }
}