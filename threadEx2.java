class A extends Thread{
    public synchronized void run(){
        String n=Thread.currentThread().getName();
        for(int i=0;i<6;i++){
            System.out.println("child thread "+n);
        }
    }
}
class threadEx2{
    public static void main(String[]args){
        A t1=new A();
        A t2=new A();
        A t3=new A();
        t1.setName("t1");
        t2.setName("t2");
        t3.setName("t3");
        t1.start();
        t2.start();
        t3.start();
        System.out.println("main thread");
    }
}