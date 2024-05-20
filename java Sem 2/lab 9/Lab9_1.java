public class Lab9_1 {
    public static void main(String[] args) {
        Thread t1 = new Greetings("Good Morning", 1000);
        Thread t2 = new Greetings("Good Afternoon", 3000);
        t1.start();
        t2.start();
        
        
    }
}
class Greetings extends Thread{
    String msg;
    int display;
public Greetings(String msg,int display){
    this.msg = msg;
    this.display = display;
    }
    public void run(){
        try{
            while (true){
                System.out.println(msg);
                Thread.sleep(display);
                
            }
        }
        catch(Exception e){
            e.printStackTrace();
        }

    }
}
// class GG implements Runnable{

// }