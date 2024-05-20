public class Lab9_2 {
    public static void main(String[] args) {
        Runnable r1 = new oddoreven(1);
        Runnable r2 = new oddoreven(0);
        Thread t1 = new Thread(r1);
        Thread t2 = new Thread(r2);
        t1.start();
        t2.start();
        
    }
}
class oddoreven implements Runnable{
    int check;
    oddoreven(int check){
        this.check = check;
    }
    public void run(){
        int i=1;
        if(check == 1){
            i=2;
            while(i<=20){
            System.out.println(i);
            i=i+2;
            }
        }
        else{
            i=1;
            while(i<=19){
            System.out.println(i);
            i=i+2;
            }
        }

    }
   
}