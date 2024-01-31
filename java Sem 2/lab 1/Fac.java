import java.util.Scanner;
public class Fac {
    public static void main(String[] args) {
      
         Scanner sc = new Scanner(System.in);
         System.out.println("Enter 2nd num :");
         int q = sc.nextInt();
         int a = q ;
         for(int i=2;i<q;i++){
            a = a*i;
         }
         System.out.println("Factorial of given no. is : "+a);
    }
}
