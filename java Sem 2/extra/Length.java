import java.util.Scanner;
public class Length {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any string");
        String a = sc.nextLine();
        int aa=0;
        int i;
        for(i=a.length()-1;i>=0;i--){
            if(a.charAt(i)==' '){
                continue;

            }
            else{
                
                for(;i>=0;i--){
                    if(a.charAt(i)!=' '){
                        aa++;
        
                    }
                    else{
                        break;
                    }
                    
                    


            }
            break;
        }
       

    }
    System.out.println(aa);
        
}
}
    

