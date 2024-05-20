import java.util.Scanner;
public class pat {
    public static void main(String[] args) {
        Scanner sb= new Scanner(System.in);
        
        int n = sb.nextInt();
        int hel=n;
        int count = 1;
       
        for(int i=n;i>0;i--){
            for(int j=1;j<=(i*n);j++){
                
                if(count==i){
                   System.out.print(hel);
                   hel--;
                   count=1;
                }
                
                else{
                    System.out.print(hel);
                    count++;
                }
            }
            hel=n;
            System.out.println(" ");
        }
    }
}
