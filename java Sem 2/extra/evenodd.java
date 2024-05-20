import java.util.Scanner;
public class evenodd {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any int no.");
        int a = sc.nextInt();
        int b = a&1;
        if(b==1){
            System.out.println("odd");
        }
        else{
            System.out.println("even");
        }

    }
    
}
