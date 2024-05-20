public class Lab8_2 {
    public static void main(String[] args) {
        try{
            int x = Integer.parseInt(args[0]);
            for(int i=0;i<x;i++){

            }

        }
        catch(Exception e){
            System.out.println();
        }
    }
}
class negetiv extends Exception{
     negetiv(String err){
        super(err);
    }
}