class mythread implements Runnable
{
    String name;
    Thread t;
    mythread(String Thread){
        name=Thread;
        t=new Thread(this,name);
        System.out.println("new thread "+t);
        t.start();
    }
    public void run(){
        try{
            for(int i=5;i>0;i--){
                System.out.println(name+","+i);
            }
            Thread.sleep(1000);
        }
        catch(Exception e){
            System.out.println(name+"interrupted");
        }
        System.out.println(name+"exiting");
    }
}
public class multithread{
    public static void main(String[]args)
    {
        new mythread("one");
        new mythread("two");
        new mythread("three");
    try{
        Thread.sleep(10000);

    }
    catch(Exception e){
        System.out.println("main thread intrupted");
    }
    }

}