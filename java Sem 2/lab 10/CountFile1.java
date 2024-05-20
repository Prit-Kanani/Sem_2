import java.io.*;
public class CountFile1 {
    public static void main(String[] args) {
        try{
            PrintWriter pw = new PrintWriter("abc.txt");
            pw.write("hello\n");
            pw.write("world\n");
            pw.close();
            
        }
        catch(Exception e){
            e.printStackTrace();
        }
    }
}




