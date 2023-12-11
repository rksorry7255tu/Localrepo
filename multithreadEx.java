class A extends Thread{
    
    public void run(){
        try{
            for(int i=0;i<5;i++){
                System.out.println("Ravi kumar");
            }
        
            Thread.sleep(1000);
        }
        catch(Exception e){
            System.out.println("exception");
        }
    }
}
class B extends Thread{
    public void run(){
        try{
            for(int i=0;i<5;i++){
                System.out.println("monu");
            }
        
            Thread.sleep(10);

        }
        catch(Exception e){
            System.out.println("exception 2");
        }
    }
}
public class multithreadEx{
    public static void main(String[]args){
        A t1=new A();
        t1.start();

        B t2=new B();
        t2.start();

        try{

            for(int i=0;i<6;i++){
                System.out.println("Raja");
            }
            
            Thread.sleep(100);
        }
        catch(Exception e){
            System.out.println("Some Exception");
        }
        for(int i=0;i<8;i++){
            System.out.println("sonu");
        }
    }
}