public class Lab8_1 {
    public static void main(String[] args) {
        
        try{
            int x= Integer.parseInt(args[0]);
            int y= Integer.parseInt(args[1]);
            int ans = 1;
            if(x==0&&y==0){
              throw new ArithmeticException("0^0 cannot define");
           }
          else{
            for(int i= 1;i <= y ;i++){
                if(y==0){
                    System.out.println(1);
                }
                else{
                    ans = x*ans;
                }
            }
            System.out.println(ans);
          }
        }
        
        catch(NumberFormatException e){
            System.out.println("---------Number Format Exception ---------");
        }
        
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("---------Array Index Out Of Bounds Exception ---------");
        }
        
        catch(IllegalArgumentException e){
            System.out.println("---------Illegal Argument Exception ---------");
        }
        
        catch(ArithmeticException e ){
            e.printStackTrace();
        }
        
        catch(Exception e){
            System.out.println("--Exception--");
        }
    }    
}
