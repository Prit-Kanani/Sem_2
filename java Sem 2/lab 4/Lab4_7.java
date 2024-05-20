import java.util.Scanner;
public class Lab4_7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        for(int i = 0;i<a.length();i++){
            for(int j = 0;j<=i;j++){
                if(j==i){
                    System.out.println(a.charAt(j));
                }
                else{
                    System.out.print(a.charAt(j));
                }
            }
        }
        System.out.println();
    }
    
}
