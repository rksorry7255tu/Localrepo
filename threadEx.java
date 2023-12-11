class B extends Thread{
    String name;
    B(String thread){
        name=thread;
        //System.out.println(name );
    }
    public void run(){
       
        try{
            for(int i=5;i>0;i--){
                System.out.println(name+" ,"+i);
            }
            Thread.sleep(100000);
        }
        catch(Exception e){
            System.out.println("Ravi error");
        }
        System.out.println(name +" exiting");
    }
}
class threadEx{
    public static void main(String[]args){
        System.out.println("sonu");
        System.out.println("monu");
        B t1=new B("one");
        t1.start();

        B t2=new B("two");
        t2.start();
        try{
            Thread.sleep(1000);

        }
        catch(Exception e){
            System.out.println("error");
        }
    }
}
